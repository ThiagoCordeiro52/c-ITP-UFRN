// #include <stdio.h>

// int main() {
//     char texto[100];
//     char nome[50];
//     int idade;
//     double altura;

//     fgets(texto, 100, stdin);

//     sscanf(texto, "%s - %i -%lf", nome, &idade, &altura);

//     printf("Nome: %s\nIdade: %i\nAltura: %.2lf\n", nome, idade, altura);
//     return 0;
// }

#include <stdio.h>

int main() {
    char texto[100];
    char nome[50];
    int idade;
    double altura;

    fgets(texto, 100, stdin);

    sscanf(texto, "%*s - %d -%*lf", &idade);

    printf("Idade: %d\n", idade);
    return 0;
}