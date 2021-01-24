#include <stdio.h>
 
int main() {
    int idade, anos, meses, dias;
    
    scanf("%i", &idade);
    
    anos = idade / 365;
    idade -= anos * 365;
    meses = idade / 30;
    idade -= meses * 30;
    dias = idade;
    
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
 
    return 0;
}