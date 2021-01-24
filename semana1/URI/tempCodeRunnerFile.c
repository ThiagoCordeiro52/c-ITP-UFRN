#include <stdio.h>
 
int main() {
    int N, hora, minuto, segundo;
    
    scanf("%i", &N);
    
    segundo = N % 60;
    minuto = N / 60;
    hora = N / 3600;
    
    printf("%i:%i:%i\n", hora, minuto, segundo);
 
    return 0;
}