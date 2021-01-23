// Escreva um programa em que o usuário informe a temperatura (em números reais) e a escala utilizada (Celsius, Farenheit ou Kelvin). 

// A saída do programa será a temperatura nas 3 escalas, com duas casas decimais de precisão.

// Considere que as escalas serão informadas como uma única letra:

// C = Temperatura em graus Celsius (°C)

// F = Temperatura em graus Farenheit (°F)

// K - Temperatura em graus Kelvin (K)



// A conversão entre as escalas pode ser feita com as seguintes equações:

// K = C + 273.15

// F = C * 1.8 + 32

#include <stdio.h>

int main() {
    float temperatura, temp1, temp2;
    char unidade;

    scanf("%f %c", &temperatura, &unidade);

    if (unidade == 'C') {
        printf("Celsius: %.2f \n", temperatura);
        temp1 = temperatura * 1.8 + 32;
        printf("Farenheit: %.2f \n", temp1);
        temp2 = temperatura + 273.15;
        printf("Kelvin: %.2lf \n", temp2);
    } else if (unidade == 'F') {
        temp1 = (temperatura - 32) / 1.8;
        printf("Celsius: %.2f \n", temp1);
        printf("Farenheit: %.2f \n", temperatura);
        temp2 = temp1 + 273.15;
        printf("Kelvin: %.2f \n", temp2);
    } else {
        temp1 = temperatura - 273.15;
        printf("Celsius: %.2f \n", temp1);
        temp2 = temp1 * 1.8 + 32;
        printf("Farenheit: %.2f \n", temp2);
        printf("Kelvin: %.2f \n", temperatura);
    }

    return 0;
}