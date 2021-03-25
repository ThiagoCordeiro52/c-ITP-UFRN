#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int hora;
    int minuto;
    int segundo;
} Horario;

int converte_horas(Horario h) {
    return h.hora*3600 + h.minuto *60 + h.segundo;
}

Horario despertador(Horario h) {
    h.hora += 1;
    h.minuto += 30;
    return h;
}

int main() {
    Horario time;
    Horario alarme;

    scanf("%d:%d:%d", &time.hora, &time.minuto, &time.segundo);
    int segundos = converte_horas(time);

    printf("%d:%d:%d equivale a %d segundos\n", time.hora, time.minuto, time.segundo, segundos);

    alarme = despertador(time);

    printf("Hora para acordar: %d:%d:%d\n", alarme.hora, alarme.minuto, alarme.segundo);
    return 0;
}