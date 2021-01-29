#include <stdio.h>

int main() {
    int petalas, heroi;

    scanf("%i %i", &petalas, heroi);

    if (petalas % 2 == 0) {
        printf("Mal me quer! Estalo!\n");

        switch (heroi)
        {
        case 0:
            printf("Iron Man\n");
            break;
        case 1: 
            printf("Capitão América\n");
            break;
        case 2:
            printf("Homem Aranha\n");
            break;
        case 3:
            printf("Viúva Negra\n");
            break;
        case 4:
            printf("Thor\n");
            break;
        case 5:
            printf("Hulk\n");
            break;
        case 6:
            printf("Doutor Estranho\n");
            break;
        case 7:
            printf("Pantera Negra\n");
            break;    
        default:
            break;
        }
    } else {
        printf("Bem me quer! #xatiado!\n");
    }

    return 0;
}

// Operador ternário: a > b ? printf("a é maior") : printf("b é maior");