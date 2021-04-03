#include <stdio.h>

void inverte_linha() {
    char letra;

    scanf("%c", &letra);

    if (letra == '\n') {
        return;
    }

    inverte_linha();
    printf("%c", letra);
}

int main() {
    inverte_linha();
    printf("\n");
    return 0;
}