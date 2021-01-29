// A decomposição(ou fatoração) em números primos é uma característica dos números inteiros definida pelo seguinte axioma:

// "Todo número inteiro positivo e maior que 1 tem uma única fatoração por números primos[referencia]"

// A ideia por trás da fatoração é que, dado um número inteiro positivo A, maior que 1, precisamos encontrar um conjunto de números primos cuja multiplicação resulta no número inicial. Um exemplo concreto pode ser com o número 800 = 2*2*2*2*2*5*5 ou 2^5*5^2.

// Escreva um programa que, leia um número inteiro N como entrada realize as seguintes operações:

// Se o número não for positivo  ou for menor ou igual à 1, o programa deve escrever na saída: "Erro, número precisa ser maior do que 1!"
// Caso contrário o programa deverá calcular e imprimir a fatoração por números primos do número recebido como entrada no formato: a^A*b^B*...*z^Z (a < b < c ... < z)

#include <stdio.h>

int main() {
    int quantidade2, quantidade;
    quantidade2 = 0;
    int N, i, j, divisores, valor;
    divisores = 0;

    scanf("%i", &N);
    if (N <= 1) {
        printf("Erro, número precisa ser maior do que 1!\n");
    } else {
        if (N % 2 == 0) {

            while (N % 2 == 0) {
                quantidade2 += 1;
                N /= 2;
            } 

            printf("2^%i", quantidade2);

            if (N >= 0) {
                printf("*");
            }
        }
        
        for (i = 3; i <= N; i += 2) {
            divisores = 0;
            quantidade = 0;

            for (j = 3; j <= i; j += 2 ) {

                if (i % j == 0) {
                    divisores += 1;
                }
            }
            if (divisores == 1 && N % i == 0) {

                while (N % i == 0) {
                    N = N / i;
                    quantidade += 1;
                } 

                if(quantidade >= 1 && N == 1) {
                    printf("%i^%i\n", i, quantidade);
                } 
                else if (quantidade >= 1) {
                    printf("%i^%i*", i, quantidade);
                }
            }
        }
    }
    return 0;
}