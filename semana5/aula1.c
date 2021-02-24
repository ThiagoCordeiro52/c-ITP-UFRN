// char textinho[200] = {0};

// char textinho[200];
//  textinho[0] = '\0';

// Parte 1

// #include <stdio.h>

// int main() {
//     char texto[10] = "Teste";

//     // char texto[10] = {0};

//     // texto[0] = 'T';
//     // texto[1] = 'e';
//     // texto[2] = 's';
//     // texto[3] = 't';
//     // texto[4] = 'e';

//     // texto[5] = '\0';

//     printf("%s\n", texto); 

//     return 0;
// }

// Parte 2

// #include <stdio.h>

// int main() {
//     char texto[10];

//     scanf("%s", texto);

//     printf("%s\n", texto);

//     return 0; 
// }

// Parte 3 -- forma segura de ler uma linha de texto

// #include <stdio.h>

// int main() {
//     char texto[100];

//     fgets(texto, 99, stdin);

//     printf("%s", texto);
//     return 0;
// }

//  Parte 4 -- forma perigosa de ler uma linha de texto

#include <stdio.h>

int main() {
    char texto[100];

    // scanf("%[A-Z]", texto);
    // leitura de A a Z de letras maiúculas, até que uma ninúsculas apareça.

    // scanf("%[A-Za-z]", texto); 
    // letras de A a Z maiúsculas ou minúsculas.

    //scanf("%[^A-Z]", texto);
    // Negação do que está nos colcochetes.

    scanf("%[^\n]", texto);

    printf("%s\n", texto);
    return 0;
}