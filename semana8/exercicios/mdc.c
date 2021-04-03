#include <stdio.h>

int calcula_mdc(int n1, int n2) {
    if(n2 == 0) {
        return n1;
    } else {
        return calcula_mdc(n2, n1 % n2);
    }
}

int main() {
    int num, num2, num3;
    scanf("%d %d %d", &num, &num2, &num3);
    int resultado_parcial, resultado;
    resultado_parcial = calcula_mdc(num, num2);
    resultado = calcula_mdc(resultado_parcial, num3);
    printf("MDC de %d, %d e %d: %d\n", num, num2, num3, resultado);
    return 0;
}