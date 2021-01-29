#include <stdio.h>

int main() {
    int somatorio, numero;

    somatorio = 0;

    scanf("%i", &numero);

    while (numero > 0) {
        somatorio += numero;
        scanf("%i", &numero);
    }

    printf("A soma foi: %i\n", somatorio);
    return 0;
}