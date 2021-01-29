#include <stdio.h>
 
int main() {
    double valor, soma;
    int i, quantidade;
    
    quantidade = 0;
    soma = 0;
    
    for (i = 1; i < 7; i++) {
        scanf("%lf", &valor);
        if (valor > 0) {
            quantidade++;
            soma += valor;
        }
    }
    
    printf("%i valores positivos\n", quantidade);
    printf("%.1lf\n", soma / quantidade);
 
    return 0;
}