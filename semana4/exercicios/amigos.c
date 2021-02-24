#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tamanho, maior1, index1, maior2, index2, valor, extra;

    maior1 = maior2 = index1 = index2=  0;

    scanf("%i", &tamanho);

    int vetor[tamanho];

    for(int i=1; i < tamanho; i++) {
        scanf(" %i", &vetor[i]);
    }

    for(int i=0; i < tamanho; i++) {
        if (vetor[i] > maior1) {
            maior1 = vetor[i];
            index1 = i;
        }
    }

    vetor[index1] = 0;

    for(int i=0; i < tamanho; i++) {
        if (vetor[i] > maior2) {
            maior2 = vetor[i];
            index2 = i;
        }
    }
    
    maior1++;
    maior2++;

    printf("index1 %i\n", index1);
    printf("index2 %i\n", index2);
    
    if (index2 >= index1 + 2 || index1 >= index2 + 2) {
        valor = maior1 + maior2 + abs(index2 - index1);
    } else  {
        valor = maior1 + maior2;
        // printf("maior1: %i\n ", maior1);
        // printf("maior2: %i\n ", maior2);
        // printf("difrenca: %i\n ", abs(index2 - index1));
        // valor = maior1 + maior2 + abs(index2 - index1);
    }


    printf("%i\n", valor);

    return 0;
}