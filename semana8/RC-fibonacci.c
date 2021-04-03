#include <stdio.h>

int fibonacci(int n) {
    if(n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("O fibonacci de %d é: %d\n", num, fibonacci(num));
    return 0;
}