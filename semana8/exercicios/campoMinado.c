#include <stdio.h>
#include <string.h>

static int explode = 0;

typedef struct campoMinado
{
    char apresentacao;
    int valor;
}mapa;

void jogada(int n, int m, int x, int y, mapa matriz[n][m]) {
    int contador = 0;
    contador = 0;

    // N E M JÁ VALEM N+2 E M+2

    // CASO ESTEJA NA BORDA
    if (x == 0 || y == 0 || x == n - 1 || y == m - 1) {
        return;
    }

    if(matriz[x][y].valor == 10 ) {
        jogada(n, m, x-1, y-1, matriz);
        jogada(n, m, x-1, y, matriz);
        jogada(n, m,x-1, y+1, matriz);
        jogada(n, m, x, y-1, matriz);
        jogada(n, m, x, y+1, matriz);
        jogada(n, m, x+1, y-1, matriz);
        jogada(n, m, x+1, y, matriz);
        jogada(n, m, x+1, y+1, matriz);
        matriz[x][y].apresentacao = 'X';
        printf("CABUUUUM!\n");
        printf("Game Over....\n");
        explode = 1;
        return 1;
    }

    if (matriz[x-1][y-1].valor == 10) {
        contador++;
    }
    if (matriz[x-1][y].valor == 10) {
        contador++;
    }
    if (matriz[x-1][y+1].valor == 10) {
        contador++;
    }
    if (matriz[x][y-1].valor == 10) {
        contador++;
    }
    if (matriz[x][y+1].valor == 10) {
        contador++;
    }
    if (matriz[x+1][y-1].valor == 10) {
        contador++;
    }
    if (matriz[x+1][y].valor == 10) {
        contador++;
    }
    if (matriz[x+1][y+1].valor == 10) {
        contador++;
    }

    if(matriz[x][y].valor != 0) {
        return;
    }

    matriz[x][y].valor = contador;

    matriz[x][y].apresentacao = contador + '0';

    if(contador == 0 && matriz[x][y].apresentacao == '0') {
        matriz[x][y].valor = 9;
        jogada(n, m, x-1, y-1, matriz);
        jogada(n, m, x-1, y, matriz);
        jogada(n, m,x-1, y+1, matriz);
        jogada(n, m, x, y-1, matriz);
        jogada(n, m, x, y+1, matriz);
        jogada(n, m, x+1, y-1, matriz);
        jogada(n, m, x+1, y, matriz);
        jogada(n, m, x+1, y+1, matriz);
    }

    return 0;

}

int main() {
    int resultadoChar;
    int n, m, b, j;
    int posx, posy;
    char escolha[6] = {0};

    scanf(" %d %d", &n, &m);
    n+=2;
    m+=2;
    mapa matriz[n][m];

    // lIMPANDO A MATRIZ
    for(int a = 0;  a < n; a++) {
        for(int w = 0; w < m; w++) {
            matriz[a][w].apresentacao = '*';
            matriz[a][w].valor = 0;
        }
    }

    //BOMBAS
    scanf(" %d", &b);

    for (int i = 0; i < b; i++) {
        int linha, coluna;
        scanf(" %d %d", &linha, &coluna);
        matriz[linha][coluna].apresentacao = '*';
        matriz[linha][coluna].valor = 10;
    }


    //JOGADAS
    scanf("%d", &j);
    for (int i = 0; i < j; i++) {
        scanf(" %s %d %d", escolha, &posx, &posy);
        resultadoChar = strcmp("Marca", escolha);
        if(resultadoChar == 0) {
          matriz[posx][posy].apresentacao = 'B';
           for(int a = 0; a < m; a++) {
                printf("=");
            }

            printf("\n");

            for(int a = 1; a < n - 1 ; a++) {
                for(int b = 1; b < m - 1; b++) {
                    printf("%c", matriz[a][b].apresentacao);
                }
                printf("\n");
            }

            if(matriz[posx][posy].valor != 10) {
                for(int a = 0; a < m; a++) {
                    printf("=");
                }

                printf("\n");
            }
        } else {
            jogada(n, m, posx, posy, matriz);
  
                for(int a = 0; a < m; a++) {
                    printf("=");
                }

                printf("\n");
            for(int a = 1; a < n - 1 ; a++) {
                for(int b = 1; b < m - 1; b++) {
                    printf("%c", matriz[a][b].apresentacao);
                }
                printf("\n");
            }
        }
    }

    if(explode == 0) {
        printf("Você sobreviveu!\n");
        for(int a = 1; a < n - 1 ; a++) {
            for(int b = 1; b < m - 1; b++) {
                if (matriz[a][b].valor == 10) {
                matriz[a][b].apresentacao = 'B';
                }
                if(matriz[a][b].valor == 0) {
                    matriz[a][b].apresentacao = 0 + '0';
                }
                if (matriz[a][b].valor != 0) {
                    matriz[a][b].apresentacao = matriz[a][b].valor + '0';
                }
            }
        }
        for(int a = 0; a < m; a++) {
            printf("=");
        }

        printf("\n");
        for(int a = 1; a < n - 1 ; a++) {
            for(int b = 1; b < m - 1; b++) {
                printf("%c", matriz[a][b].apresentacao);
            }
            printf("\n");
        }
    }
    return 0;
}