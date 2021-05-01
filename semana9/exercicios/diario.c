#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct compromisso{
    char descricao[105];
    int hi, mi, hf, mf;
} Entry;

void ordena_agenda(Entry* vet, int tam){
    Entry aux;

    for(int i=0; i<tam-1; i++)
        for(int j=i+1; j<tam; j++){
            if(vet[i].hi > vet[j].hi){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
            else if(vet[i].hi == vet[j].hi && vet[i].mi > vet[j].mi){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
}

void consulta_compromissos(Entry* agenda, int hi, int mi, int hf, int mf){
  if(agenda->hi > hi && agenda->hi < hf){
    printf("%02d:%02d - %s\n", agenda->hi, agenda->mi, agenda->descricao);
  }
  else if(agenda->hi == hi && agenda->hf == hi){
    if(agenda->mi >= mi && agenda->mi <= mf)
      printf("%02d:%02d - %s\n", agenda->hi, agenda->mi, agenda->descricao);   
  }
  else if(agenda->hi == hi){
    if(agenda->mi >= mi)
      printf("%02d:%02d - %s\n", agenda->hi, agenda->mi, agenda->descricao); 
  }
  else if(agenda->hi == hf){
      if(agenda->mi <= mf)
        printf("%02d:%02d - %s\n", agenda->hi, agenda->mi, agenda->descricao);
    }
}

void cadastra_compromisso(Entry *novo){
  char descricao[500];

  printf("Digite as informacoes:\n");
  scanf("%d:%d %d:%d", &novo->hi, &novo->mi, &novo->hf, &novo->mf);
  scanf(" %[^\n]", descricao);
  strcpy(novo->descricao, descricao);
}

int carrega_agenda(Entry * vetor){
  int i =0;
  FILE* arquivo = fopen("agenda", "r");

  if(arquivo != NULL){
    while(fscanf(arquivo, "%d:%d %d:%d", &vetor[i].hi, &vetor[i].mi, &vetor[i].hf, &vetor[i].mf) != EOF){
      fscanf(arquivo, " %[^\n]", vetor[i].descricao);
      i++;
    }
    fclose(arquivo);
  }
  else{
    printf("Erro %s ao abrir o arquivo!\n", strerror(errno));
  }

  return i;
}

void salvar_agenda(Entry* vetor, int tam){
  FILE* arquivo = fopen("agenda", "w");

  if(arquivo != NULL){
    for(int i = 0; i < tam; i++){
      fprintf(arquivo, "%02d:%02d %02d:%02d\n%s\n", vetor[i].hi, vetor[i].mi, vetor[i].hf, vetor[i].mf, vetor[i].descricao);
    }
    fclose(arquivo);
  }
  else{
    printf("Erro %s ao abrir o arquivo!\n", strerror(errno));
  }
}

int main(){
    int entradas, i, j;
    int hi, mi, hf, mf;
    char linha[20];
    Entry agenda[105] = {0}; 

    entradas = carrega_agenda(agenda);

    ordena_agenda(agenda, entradas);

    //Leitura dos comandos

    int sair = 0;

    while(!sair){
      printf("Digite o comando\n");
      scanf(" %s", linha);
      if(strcmp(linha, "Consultar") == 0){
        scanf("%d:%d %d:%d", &hi, &mi, &hf, &mf);
        for(j=0; j<entradas; j++){
          consulta_compromissos(&agenda[j], hi, mi, hf, mf);
        }
        printf("\n");
      }
      else if(strcmp(linha, "Cadastrar") == 0){
        cadastra_compromisso(&agenda[entradas++]);
        ordena_agenda(agenda, entradas);
        printf("\n");
      }
      else if(strcmp(linha, "Sair") == 0){
        sair = 1;
      }
      else{
        printf("Comando Inválido\n");
      }
    }

    //Salva estado atual da agenda
    salvar_agenda(agenda, entradas);
    
    return 0;
}