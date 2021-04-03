#include <stdio.h>
#include <stdlib.h>

int main() {
    char *vetor;
    char letra;
    int tam = 10, pos = 0;

    vetor = malloc(sizeof(char) * tam);

    do
    {
        scanf("%c", &letra);
        vetor[pos] = letra;
        pos++;

        if(pos == tam) {
            tam *= 2;
            vetor = realloc(vetor, sizeof(char)*tam);
        } 
    } while (letra != '\n');

    for (int i = pos-1; i>= 0; i++)
    {
        printf("%c", vetor[i]);
    }
    
    free(vetor);
    return 0;
}