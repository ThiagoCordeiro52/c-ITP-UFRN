// Escreva um programa que implemente uma calculadora, o programa deve receber como entrada a operação(+,-,*,/ e ^), os dois operandos (números reais, exceto para a operação de potencia que recebe um número real e um inteiro). 

// A media que as operações forem sendo executadas a calculadora deve imprimir na tela a operação calculada e seu resultado como mostrado nos exemplos. O programa só deve terminar quando o caractere 'e' for lido, indicando que o usuário terminou de calcular.

#include <stdio.h>

int main() {
    double numero1, numero2, valor;
    int numero3, i;
    char op;

    valor = 1;
    
    do {
        scanf("%c", &op);

        switch (op)
        {
        case '+':
            scanf(" %lf", &numero1);
            scanf(" %lf", &numero2);
            printf("%.3lf+%.3lf=%.3lf\n", numero1, numero2, numero1 + numero2);
            break;
        case '-':
            scanf(" %lf", &numero1);
            scanf(" %lf", &numero2);
            printf("%.3lf-%.3lf=%.3lf\n", numero1, numero2, numero1 - numero2);
            break;
        case '*':
            scanf(" %lf", &numero1);
            scanf(" %lf", &numero2);
            printf("%.3lf*%.3lf=%.3lf\n", numero1, numero2, numero1 * numero2);
            break;
        case '/':
            scanf(" %lf", &numero1);
            scanf(" %lf", &numero2);
            if (numero2 == 0) {
                printf("Erro! Divisão por 0!\n");
            } else {
            printf("%.3lf/%.3lf=%.3lf\n", numero1, numero2, numero1 / numero2);
            }
            break;
        case '^':
            scanf(" %lf", &numero1);
            scanf(" %i", &numero3);
            for (i = 0; i < numero3; i++)
            {
                valor *= numero1;
            }
            printf("%.3lf^%i=%.3lf\n", numero1, numero3, valor);
            break;
        default:
            break;
        }

    } while (op != 'e' && op != 'E');
    
    return 0;
}