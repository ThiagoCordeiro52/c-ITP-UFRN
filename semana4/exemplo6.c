#include <stdio.h>

void detecta_negativos(int lin, int col, int matriz[lin][col]) {
    int i, j;

    for (i= 0; i <lin; i++) {
        for (j=0; j<col; j++) {
            if (matriz[lin][col] < 0) {
                printf("Linha: %i, Coluna: %i \n", i, j);
            }
        }
    }
}

int main() {
    int matriz[5][5];
    int i, j;

    for (i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            scanf("%i", &matriz[i][j]);
        }
    }

    detecta_negativos(5, 5, matriz);

    return 0;
}