#include <stdio.h>

void binario(int n) {
    if(n < 1) {
        printf("%d", n % 2);
        return;
    } else {
        binario(n/2);
        printf("%d", n/2);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    binario(num);
    return 0;
}