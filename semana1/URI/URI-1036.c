#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C, x;
    double raiz1, raiz2;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    x = B * B - 4 * A * C;
    
    if (A == 0 || x < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    raiz1 = (-B + sqrt(x)) / (2 * A);
    raiz2 = (-B - sqrt(x)) / (2 * A);
    
    printf("R1 = %.5lf\n", raiz1);
    printf("R2 = %.5lf\n", raiz2);

 
    return 0;
}