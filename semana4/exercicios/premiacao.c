#include <stdio.h>

int main() {
    int s, n, i, j, cont, valor;

    scanf("%i %i", &s, &n);

    int valores[s-1];

    for (i=0; i < s; i++) {
        valores[i] = 0;
    }

    for (i=0; i < n; i++) {
        scanf("%i", &cont);
        for(j=0; j < cont; j++) {
            scanf("%i", &valor);
            if (valores[valor] == 0) {
                valores[valor] = 1;
            }
        }
    }

    printf("[");

    for (j=0; j < s; j++) {
        if (j == (s-1) && valores[j] == 0) {
            printf("%i", j);
        } else if(valores[j] == 0) {
            printf("%i,", j);
        }
    }

    printf("]\n");
    return 0;
}