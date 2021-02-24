#include <stdio.h>

int main() {
    int fotos, entrada;
    int tubaroes[15] = {0};
    int i, diferentes = 0;

    scanf("%i", &fotos);

    for (i=0; i<fotos; i++) {
        scanf("%i", &entrada);

        if(tubaroes[entrada] == 0) {
            tubaroes[entrada] = 1;
            diferentes++;
        }
    }

    printf("%d espécies diferentes!\n", diferentes);

    for (i = 1; i<15; i++){
        if(tubaroes[i] != 0) {
            switch (i)
            {
            case 1:
                printf("Tubarão Branco\n");
                break;
            case 2:
                printf("Tubarão Martelo\n");
                break;
            case 3:
                printf("Tubarão Touro\n");
                break;
            case 4:
                printf("Tubarão Baleia\n");
                break;
            case 5:
                printf("Tubarão Lixa\n");
                break;
            case 6:
                printf("Tubarão Frade\n");
                break;
            case 7:
                printf("Tubarão Tigre\n");
                break;
            case 8:
                printf("Tubarão Cabeça chata\n");
                break;
            case 9:
                printf("Tubarão Serra\n");
                break;
            case 10:
                printf("Tubarão Pontas Negras\n");
                break;
            case 11:
                printf("Tubarão Reposa\n");
                break;
            case 12:
                printf("Tubarão Mako\n");
                break;
            case 13:
                printf("Tubarão Bruxa\n");
                break;
            case 14:
                printf("Tubarão Azul\n");
                break;
            default:
                break;
            }
        }
    }

    return 0;
}