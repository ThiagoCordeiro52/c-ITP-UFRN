#include <stdio.h>

int main() {
    int numero1, numero2;
    char op;

    do {
        printf("Digite a conta desejada (valor operador valor):\n");
        scanf("%i %c %i", &numero1, &op, &numero2);
        switch (op)
        {
        case '+':
            printf("%i\n", numero1 + numero2);
            break;
        case '-':
            printf("%i\n", numero1 - numero2);
            break;
        case '*':
            printf("%i\n", numero1 * numero2);
            break;
        case '/':
            if (numero2 == 0) {
                printf("Erro! Divisão por 0!\n");
            } else {
                printf("%i\n", numero1 / numero2);
            }
            break;
        
        default:
            break;
        }

    } while(op != 'F');

    return 0;
}