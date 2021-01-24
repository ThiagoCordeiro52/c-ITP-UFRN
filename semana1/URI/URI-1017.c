#include <stdio.h>
 
int main() {
    int tempo, velocidade, espaco;
    double quantidade;
    
    scanf("%i", &tempo);
    scanf("%i", &velocidade);
    
    espaco = tempo * velocidade;
    
    quantidade = espaco / 12.0;
    
    printf("%.3lf\n", quantidade);
 
    return 0;
}