#include <stdio.h>

int main() {

    int numero1 = 5;
    int numero2 = 2;
    // int numero3 = 1;

    printf("%i\n", -numero1); // inverte o sinal da variável
    printf("%i\n", ++numero1); // aumenta o valor em 1
    printf("%i\n", --numero1); // diminui o valor em 1


    printf("%i\n", numero1 + numero2);
    printf("%i\n", numero1 - numero2);
    printf("%i\n", numero1 * numero2);
    printf("%i\n", numero1 / numero2); // divisão inteira, se colocar números racionais aí se torna uma divisão racional
    // por exemplo, 4.0 / 3
    printf("%i\n", numero1 % numero2);

    // Precedência de operadores
// 1. ++, - - (posfixo)
// 2. ++, - - (prefixo), - (unário), ! (negação)
// 3. *, %, /
// 4. +, -
// 5. >, > =, <, < =
// 6. ==, !=
// 7. &&
// 8. ||

    return 0;
}