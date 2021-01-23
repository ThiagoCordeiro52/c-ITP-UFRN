// Sempre que eu vou no banco sacar dinheiro o caixa ri de mim dá opções de como eu vou querer o valor em notas.

// Por exemplo, se você for sacar R$ 100, você pode pegar uma nota de 100, ou duas de 50. Às vezes ele também oferece 5 de 20. Mas nunca metade de uma de 200...

// Faça um programa que, dado um valor inteiro representando um saque, escreva a opção que utiliza a menor quantidade de notas. Para o programa considere os seguintes valores:

// Notas: 100, 50, 20, 10, 5, 2

// Moeda: 1

// Seu programa deve imprimir a mensagem "X nota(s) de Y" para cada tipo de nota utilizada, onde X é a quantidade e Y é o valor da nota. No caso da moeda, o programa deve imprimir "X moeda(s) de 1". Atente para os exemplos para ver o modelo da impressão da saída.

#include <stdio.h>

int main() {
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, moeda1 = 0, valor = 0;

    scanf("%i", &valor);


    while (valor >= 100) {
        valor -= 100;
        nota100 += 1;
    }

    while (valor >= 50) {
        valor -= 50;
        nota50 += 1;
    }

    while (valor >= 20) {
        valor -= 20;
        nota20 += 1;
    }

    while (valor >= 10) {
        valor -= 10;
        nota10 += 1;
    }

    while (valor >= 5) {
        valor -= 5;
        nota5 += 1;
    }

    while (valor >= 2) {
        valor -= 2;
        nota2 += 1;
    }

    while (valor >= 1) {
        valor -= 1;
        moeda1 += 1;
    }

    if (nota100) {
        printf("%i nota(s) de 100\n", nota100);
    }

    if (nota50) {
        printf("%i nota(s) de 50\n", nota50);
    }

    if (nota20) {
        printf("%i nota(s) de 20\n", nota20);
    }

    if (nota10) {
        printf("%i nota(s) de 10\n", nota10);
    }

    if (nota5) {
        printf("%i nota(s) de 5\n", nota5);
    }

    if (nota2) {
        printf("%i nota(s) de 2\n", nota2);
    }

    if (moeda1) {
        printf("%i moeda(s) de 1\n", moeda1);
    }
    return 0;
}