#include <stdio.h>

int main() {
    double numero = 5.5;

    // scanf("%d", &numero);
    // scanf("%d %d", &numero, &numero2); leitura de dois valores e guardados em variáveis diferentes
    // printf("Valor lido foi: %d\n", numero);

    // printf("Linha1 \n Linha2 \n Linha3\n");

    printf("%.2lf\n", numero); // não se usa &numero, mas sim numero, somente nessa função printf(). Essa formatação mostrará duas casas decimais apenas. 
    // printf("%7.2lf\n", numero); alocando sete espaços
    // printf("%07.2lf\n", numero); aloca 7 sete espaços e preenche com 0.

    return 0;
}

// Placeholders

// int: %d ou %i
// float: %f
// double: %lf 
// char:  %c

// Quebra de linha: \n e Tabulação: \t
// Só pode usar aspas duplas
