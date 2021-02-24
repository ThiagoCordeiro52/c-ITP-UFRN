#include <stdio.h>

#define TAM1 3
#define TAM2 2


int main() {
    int matriz1[TAM1][TAM1], matriz2[TAM1][TAM1], matriz3[TAM1][TAM2];
    int resultadoSoma[TAM1][TAM1], resutltadoMulti[TAM1][TAM2];
    int i, j, k;

    // leitura das matrizes

    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM1; j++) {
            scanf("%i", &matriz1[i][j]);
        }
    }

    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM1; j++) {
            scanf("%i", &matriz2[i][j]);
        }
    }

    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM2; j++) {
            scanf("%i", &matriz3[i][j]);
        }
    }

    //Soma da matriz1 com matriz2

    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM1; j++) {
            resultadoSoma[i][j] =  matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\n\nSoma das matrizes 1 e 2:\n");
    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM1; j++) {
            printf("%i ", resultadoSoma[i][j]);
        }
        printf("\n");
    }

    //Multiplicação de matriz 2 com 3
    for (i=0; i<TAM1; i ++) {
        for (j = 0; j<TAM2; j++) {
            resutltadoMulti[i][j] = 0;
            for (k=0; k<TAM1; k++) {
                resutltadoMulti[i][j] += matriz2[i][k] * matriz3[k][j];
            }
        }
    }

    for (i=0; i<TAM1; i++) {
        for (j=0; j<TAM2; j++) {
            printf("%i ", resutltadoMulti[i][j]);
        }
        printf("\n");
    }

    return 0;
}