#include <stdio.h>

int potencia(int x, int y) {
    int i;
    int pot = 1;

    for(i=0; i<y; i++) {
        pot *= x;
    }

    return pot;
}

int main() {
    int num1, num2;
    int resultado;

    scanf("%d %d", &num1, &num2);

    resultado = potencia(num1, num2);

    printf("O valor da potencia foi: %d\n", resultado);
}