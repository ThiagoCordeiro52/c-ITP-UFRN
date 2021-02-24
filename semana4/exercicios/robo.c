#include <stdio.h>

int main() {
    int l = 0, c = 0, l_inicial = 0, c_inicial = 0, movimentos = 1;
    char  direcao;

    scanf("%d %d", &l, &c);

    l+=2;
    c+=2;
    char matriz[l][c];

    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            if(i == 0 || j == 0 || i == l - 1 || j == c - 1) {
                matriz[i][j] = 0;
                continue;
            }
            scanf(" %c", &matriz[i][j]);
        }
    }

    scanf("%i %i %c", &l_inicial, &c_inicial, &direcao);
    
    scanf("%i", &movimentos);

    for (int contador = 0; contador < movimentos; contador++) {
        if(direcao == 'N') {
            if(matriz[l_inicial + 1][c_inicial] == '_' || matriz[l_inicial + 1][c_inicial] == '|' || l_inicial + 1 == 0 ||l_inicial + 1 == l) {
                direcao = 'L';
                continue;
            }

            if(matriz[l_inicial + 1][c_inicial] == '*') {
                direcao = 'O';
                continue;
            }
            
            if(matriz[l_inicial + 1][c_inicial] == '.') {
                  l_inicial += 1;
            }
            

          
        }

        if(direcao == 'S') {
            if(matriz[l_inicial - 1][c_inicial] == '_' || matriz[l_inicial - 1][c_inicial] == '|' || l_inicial - 1 == 0 || l_inicial - 1 == l) {
                direcao = 'O';
                continue;
            }

            if(matriz[l_inicial - 1][c_inicial] == '*') {
                direcao = 'L';
                continue;
            }
            
            if (matriz[l_inicial - 1][c_inicial] == '.') {

            l_inicial -= 1;
                continue;
            }
        }

        if (direcao == 'L') {
            if(matriz[l_inicial][c_inicial + 1] == '_' || matriz[l_inicial][c_inicial + 1] == '|' || c_inicial + 1 == 0 || c_inicial + 1 == c) {
                direcao = 'S';
                continue;
            }

            if(matriz[l_inicial][c_inicial + 1] == '*') {
                direcao = 'N';
                continue;
            }

            c_inicial += 1;
            continue;
        }

        if (direcao == 'O') {
            if(matriz[l_inicial][c_inicial - 1] == '_' || matriz[l_inicial][c_inicial - 1] == '|' || c_inicial - 1 == 0 ||c_inicial - 1 == c) {
                direcao = 'N';
                continue;
            }

            if(matriz[l_inicial][c_inicial - 1] == '*') {
                direcao = 'S';
                continue;
            }

            c_inicial -= 1;
            continue;
        }
    }

    printf("Posição final: %i %i\n", l_inicial, c_inicial);

    return 0;
}