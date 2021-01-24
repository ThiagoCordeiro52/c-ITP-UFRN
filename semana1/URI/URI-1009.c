#include <stdio.h>
 
int main() {
    char nome[61];
    double valor1, valor2, total, porcentagem;
    
    scanf("%s", nome);
    scanf("%lf", &valor1);
    scanf("%lf", &valor2);
    
    porcentagem = valor2 * 0.15;
    
    total = valor1 + porcentagem;
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}