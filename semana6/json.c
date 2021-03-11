#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double* fromJsonString_double(char* string, int* tam) {
    double *vetor = calloc(sizeof(double), 100);
    char* pedaco;
    string++;

    pedaco = strtok(string, ",");

    while(pedaco != NULL) {
        sscanf(pedaco, "%lf", &vetor[*tam]);
        (*tam)++;
        pedaco = strtok(NULL, ",");
    }
    return vetor;
}

int* fromJsonString_int(char* string, int* tam) {
    int *vetor = calloc(sizeof(int), 100);
    char* pedaco;
    string++;

    pedaco = strtok(string, ",");

    while(pedaco != NULL) {
        sscanf(pedaco, " %d ", &vetor[*tam]);
        (*tam)++;
        pedaco = strtok(NULL, ",");
    }
    return vetor;

}

int main() {
    int n;
    char entrada[201];
    int contador = 0, ponto = 0;
    char *substring;
    double* resultadoD;
    int* resultadoI;
    int tam = 0;


    scanf(" %i ", &n);
    for(int i = 0; i < n; i++) {
        tam = ponto = 0;
        fgets(entrada, 200, stdin);
        while(entrada[contador] != '\0') {
            if(entrada[contador] == '.' ) {
                ponto = 1;
            }
            contador++;
        }

        if(contador <= 3) {
            printf("vetor vazio \n");
            continue;
        }

        if(ponto == 1) {
            resultadoD = fromJsonString_double(entrada, &tam);
            for(int j = 0; j < tam; j++) {
                printf("%lf ", resultadoD[j]);
            }
            printf("\n");
        } 
        else {
            resultadoI = fromJsonString_int(entrada, &tam);
            for(int j = 0; j < tam; j++) {
                printf("%i ", resultadoI[j]);
            }
            printf("\n");
        }

        contador = 0;

    }
    return 0;
}