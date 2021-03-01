#include <stdio.h>
#include <string.h>

int main() {
    char a[41];
    char b[41];
    char mensagem[40] = {0};
    int tamanhoa;
    int tamanhob;
    fgets(a, 40, stdin);
    fgets(b, 40, stdin);


    tamanhoa = strlen(a);
    tamanhob = strlen(b);

    for (int i = 0; i < tamanhob; i++) {
        printf("%c%c", a[i], b[i]);
    }

    for (int j = tamanhob; j < tamanhoa; j++) {
        printf("%c", a[j]);

    }
    
    return 0;
}