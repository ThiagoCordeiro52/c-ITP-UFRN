#include <stdio.h>

int main() {
    int inicial, final;
    int i, j, aux, primo;

    scanf("%d %d", &inicial, &final);

   // Troca inicial e final de posição, se o valor de inicial for maior que final
    if (inicial > final) {
        aux = inicial;
        inicial = final;
        final = aux;
    }

    primo = 0;

    // Para todos os números no intervalo entre inicial e final
    for (i=inicial; i <= final; i++) {
        // Verificar se i é primo ou não
        // Verificar se algum número entre 2 e i-1 divide i
            // se sim, não é primo, continua avaliando o valor
            // senão, é primo, põe o valor na tela
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primo++;
            }
        }
        if (primo == 0 && i != 1) {
            printf("%i ", &i);
        }
    }

    printf("\n");

    return 0;
}