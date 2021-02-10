#include <stdio.h>


void mostrar_tabela(int hora, int minuto, int segundo) {
    int i;
    int hora1, hora2, hora3, hora4;
    int minuto1, minuto2, minuto3;
    int segundo1, segundo2, segundo3;

    hora1 = hora2 = hora3 = hora4 = hora;
    minuto1 = minuto2 = minuto3 = minuto;
    segundo1 = segundo2 = segundo3 = segundo;

    for (i = 1; i <=4; i++) {
        if (i == 1) {
            hora1 += 1;

            if (hora1 >= 24) {
                hora1 -= 24;
            }

            if (minuto >= 60) {
                hora1 += 1;
                minuto -= 60;
            }

            if (segundo >= 60) {
                minuto += 1;
                segundo -= 60;
            }

            printf("%02i:%02i:%02i\n", hora1, minuto, segundo);
        } 
        if (i == 2) {
            hora2 += 2;
            minuto1 += 10;
            segundo1 += 30;

            if (hora2 >= 24) {
                hora2 -= 24;
            }

            if (minuto1 >= 60) {
                hora2 += 1;
                minuto1 -= 60;
            }

            if (segundo1 >= 60) {
                minuto1 += 1;
                segundo1 -= 60;
            }


            printf("%02i:%02i:%02i\n", hora2, minuto1, segundo1);   
        } 
        if (i == 3) {
            hora3 += 4;
            minuto2 += 40;
            segundo2 += 50;

            if (hora3 >= 24) {
                hora3 -= 24;
            }

            if (minuto2 >= 60) {
                hora3 += 1;
                minuto2 -= 60;
            }

            if (segundo2 >= 60) {
                minuto2 += 1;
                segundo2 -= 60;
            }


            printf("%02i:%02i:%02i\n", hora3, minuto2, segundo2);              
        } 
        if (i == 4) {
            hora4 += 12;
            minuto3 += 5;
            segundo3 += 5;

            if (hora4 >= 24) {
                hora4 -= 24;
            }

            if (minuto3 >= 60) {
                hora4 += 1;
                minuto3 -= 60;
            }

            if (segundo3 >= 60) {
                minuto3 += 1;
                segundo3 -= 60;
            }

            printf("%02i:%02i:%02i\n", hora4, minuto3, segundo3);    
        }
    }
}

int main() {
    int hora, minuto, segundo;

    scanf(" %i %i %i", &hora, &minuto, &segundo); 
    mostrar_tabela(hora, minuto, segundo);
}