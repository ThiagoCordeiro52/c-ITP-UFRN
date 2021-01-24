#include <stdio.h>
 
int main() {
    int N, hora, minuto, segundo;
    
    scanf("%i", &N);
    
    hora = N / 3600;
    N -= hora * 3600;
    minuto = N / 60;
    N -= minuto * 60;
    segundo = N;
    
    printf("%i:%i:%i\n", hora, minuto, segundo);
 
    return 0;
}