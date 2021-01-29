#include <stdio.h>

int main() {
    int N, V, i;
    char nome;
    int ataque;

    scanf("%i %i", &N, &V);

    for (i = 1; i <= N; i++ ) {
        scanf(" %c %i", &nome, &ataque);

        if (ataque > 14) {
            switch (nome)
            {
            case 'A':
                V -= 10;
                break;
            case 'I':
                V -= 10;
                break;
            case 'R':
                V -= 6;
                break;
            case 'W':
               V -= 8;
                break;  
            case 'S':
                V-= 4;
                break;
            case 'C':
                V -= 1;
                break;        
            default:
                break;
            }

    }

    if (V <= 0) {
            switch (nome)
            {
            case 'A':
                printf("Alyson derrotou o dragão!\n");
                break;
            case 'I':
                printf("Isaac derrotou o dragão!\n");
                break;
            case 'R':
                printf("Rafaela derrotou o dragão!\n");
                break;
            case 'W':
                printf("Wellington derrotou o dragão!\n");
                break;  
            case 'S':
                printf("Salgado derrotou o dragão!\n");
                break;
            case 'C':
                printf("Careca derrotou o dragão!\n");
                break;        
            default:
                break;
            }

            break;
        }
    }

        if (V > 0) {
        printf("Casa caiu!\n"); }

    return 0;
}