#include <stdio.h>
 
int main() {
    int peca1, numero1, peca2, numero2;
    float valor1, valor2, total;
    
    scanf("%i %i %f", &peca1, &numero1, &valor1);
    scanf("%i %i %f", &peca2, &numero2, &valor2);
    
    total = (numero1 * valor1) + (numero2 * valor2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}