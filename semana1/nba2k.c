#include <stdio.h>

int main() {
    double altura_pes, altura_metros;
    double peso_libras, peso_quilos;

    printf("Digite o valor da altura (pés): ");
    scanf("%lf", &altura_pes);
    printf("Digite o valor do peso (libras): ");
    scanf("%lf", &peso_libras);

    altura_metros = altura_pes * 0.3038;
    peso_quilos = peso_libras * 0.454;

    printf("Resultado\n");
    printf("Altura em metros: %2.lf\n", altura_metros);
    printf("Peso em quilos: %2lf\n", peso_quilos);

    return 0;
}