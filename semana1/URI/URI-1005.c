#include <stdio.h>
 
int main() {
    float valor1, valor2, media;
    
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    media = ((valor1 * 3.5) + (valor2 * 7.5)) / 11;
    printf("MEDIA = %.5f\n", media);
 
    return 0;
}