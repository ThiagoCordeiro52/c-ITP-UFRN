#include <stdio.h>
 
int main() {
    int i, contador;
    double valor;
    
    contador = 0;
    
    for(i = 1; i < 7; i++) {
        scanf(" %lf", &valor);
        if (valor > 0) {
            contador++;
        }
    }
    
    printf("%i valores positivos\n", contador);
 
    return 0;
}