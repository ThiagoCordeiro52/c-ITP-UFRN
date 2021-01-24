#include <stdio.h>
#include<stdlib.h>
 
int main() {
    int A, B, C, maiorab, maiorfim;
    
    scanf("%i %i %i", &A, &B, &C);
    
    maiorab = (A + B + abs(A- B)) / 2;
    
    maiorfim = (maiorab + C + abs(maiorab - C)) / 2;
    
    printf("%i eh o maior\n", maiorfim);

 
    return 0;
}