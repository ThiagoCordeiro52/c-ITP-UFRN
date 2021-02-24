#include <stdio.h>

int main() {
    int m, n, locallinha, localcoluna;
    int contador = 0;
    int valor;
    

    scanf("%i %i", &n, &m);
    scanf("%i %i", &locallinha, &localcoluna);

    // locallinha--;
    // localcoluna--;

    m += 2;
    n += 2;

    int matriz[n][m];


    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if(i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                matriz[i][j] = 0;
                continue;
            }
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 1; i<n; i++) {
        for (int j = 1; j<m; j++) {
            if (matriz[i][j] > matriz[i - 1][j] && matriz[i][j] > matriz[i + 1][j] && matriz[i][j] > matriz[i][j - 1] && matriz[i][j] > matriz[i][j - 1] & matriz[i][j] > matriz[i - 1][j - 1] & matriz[i][j] > matriz[i - 1][j + 1] & matriz[i][j] > matriz[i + 1][j - 1] & matriz[i][j] > matriz[i + 1][j + 1]) {
                contador++;
                printf("Local %i: %i %i\n", contador, i, j);
                if (locallinha == i && localcoluna == j) {
                    printf("Descanse na Força...\n");
                    return 0;
                }
            }
        }
    }

    printf("Ao resgate!\n");

    return 0;
}