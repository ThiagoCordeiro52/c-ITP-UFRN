// Um professor de ITP, que permanecerá anônimo, anda se aventurando nas madrugadas pela cidade de Night City de Cyberpunk 2077.

// Como ele fica jogando até cedo (da manhã), ele acaba colocando um despertador para não dormir o dia todo! O despertador toca exatamente às 12:01. Mas o professor mora em uma rua movimentada, e vez ou outra o carro do ovo, os meninos brincando ou sua esposa furiosa o acordam antes da hora.

// Escreva um programa que receberá uma hora no formato HH:MM, e verifica se já está na hora de acordar ou não. Seu programa deve imprimir "Cedo demais!" se ele for acordado até as 12:00, e "Hora de acordar..." se ele for acordado após esse horário.

#include <stdio.h>

int main() {
    int hora, minuto;
    char pontos;

    scanf("%i%c%i", &hora, &pontos, &minuto);

    if (hora <= 12 &&  minuto == 0 || hora < 12) {
        printf("Cedo demais!\n");
    } else {
        printf("Hora de acordar...\n");
    }

    return 0;
}