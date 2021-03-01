#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[61];

    fgets(frase, 60, stdin);

    for (int i = 0; i < 61; i++) {
        frase[i] = tolower(frase[i]);
    }

    for (int i = 0; i < 61; i++) {
        if (i == 0) {
            frase[i] = toupper(frase[i]);
        }

        if (frase[i] == ' ') {
            frase[i + 1] = toupper(frase[i + 1]);
        }
    }

    printf("%s", frase);

    return 0;
}



