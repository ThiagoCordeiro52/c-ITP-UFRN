#include <stdio.h>
#include <stdlib.h>

typedef struct compromisso
{
    char descricao[105];
    int hi, mi, hf, mf;
} Entry;

void ordenar_agenda(Entry* vet, int tam) {
    Entry aux;

    for (int i = 0; i < tam - 1; i++) {

        for (int j = i; j < tam; j++) {

            if(vet[i].hi > vet[j].hi) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }  else if(vet[i].hi == vet[j].hi && vet[i].mi > vet[j].mi) {
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            }
        }

    }
}

int main() {
    int entradas, i;
    Entry agenda[105] = {0};

    scanf("%d", &entradas);

    for (i = 0; i < entradas; i++) {
        scanf("%d:%d %d:%d", &agenda[i].hi, &agenda[i].mi, &agenda[i].hf, &agenda[i].mf);
        scanf(" %[^\n]", agenda[i].descricao);
    }

    ordenar_agenda(agenda, entradas);
    
    while(scanf("%d:%d %d:%d", &hi, &mi, &hf, &mf) != EOF) {
        
    }

    return 0;
}
