#include <stdio.h>
#include <stdlib.h>


/*
@brief gera um número aleatório no intervalo [min,max]
@param min o número minimo no range
@param max o número máximo no range
@return um número aleatório no intervalo [min,max]
*/
int rand_int_range(int min, int max){
   int range = max - min + 1;
   return min + rand()%range;
}

int* criarVetorAleatorio(int tamanho, int minimo, int maximo) {
    int *vetor = malloc(sizeof(int) * (tamanho + 3));

    vetor[0] = tamanho;
    vetor[1] = minimo;
    vetor[2] = maximo;

    for (int i = 3; i < tamanho + 3; i++ ) {
        vetor[i] = rand_int_range(minimo, maximo);
    }

    return vetor;
}

int* criarHistograma(int *valores) {
    int i, auxiliar, j, valor;
    int contador = 0;
    int *vetor = malloc(sizeof(int) * (valores[2] - valores[1] + 3));

    vetor[0] = valores[1];
    vetor[1] = valores[2];


    // ordena os valores de forma crescente no vetor valores 
    for(i = 3; i < valores[0] + 3; i++ ) {
        for(j = i; j < valores[0] + 3; j++) {
            if(valores[i] > valores[j]) {
                auxiliar = valores[i];
                valores[i] = valores[j];
                valores[j] = auxiliar;
            }
        }
    }

    auxiliar = 2;

    // calcula a quantidade de vezes que os elementos aparecem
    for (i = valores[1]; i <= valores[2]; i++) {
        contador = 0;
        for(j = 3; j < valores[0] + 3; j++){
            if( valores[j] == i) {
                contador++;
            }
        }
        vetor[auxiliar] = contador;
        auxiliar++;
    }

    return vetor;
}

float* criarPorcentagens(int *histograma) {
    float *quantidade = malloc(sizeof(float) * (histograma[1] - histograma[0] + 1));

    int valores = (histograma[1] - histograma[0] + 1);

    float valor = 0;

    for (int contador = 2; contador <= valores + 1; contador++) {
        valor += histograma[contador];
    }

    for (int i = 2; i <  valores + 2; i++) {
        if (histograma[i] == 0) {
            quantidade[i - 2] = 0;
            continue;
        }
        quantidade[i - 2] = (histograma[i] / valor);
    }

    return quantidade;
}

void* imprimePorcentagens(float* porcentagem, int* quantidade) {
    printf("Valor|Qtdade|Porcent\n");
    int auxiliar = 0;
    for(int i = quantidade[0]; i <= quantidade[1]; i++) {
        printf("%i |%i |%.2lf%%", i, quantidade[auxiliar+2], porcentagem[auxiliar] * 100);
        printf("\n");
        auxiliar++;
    }
}

void* liberar(int* valores, float* porcentagens, int* histograma) {
    free(valores);
    free(porcentagens);
    free(histograma);
}

int main(){
   int tamanho, maximo, minimo;
   scanf("%d", &tamanho);
   scanf("%d %d", &minimo, &maximo);
   int *valores = criarVetorAleatorio(tamanho, minimo, maximo);
   int *histograma = criarHistograma(valores);
   float *porcentagens = criarPorcentagens(histograma);
   imprimePorcentagens(porcentagens, histograma);
   liberar(valores, porcentagens, histograma);
   return 0;
}

