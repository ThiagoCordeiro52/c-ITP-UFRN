#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};

const char fragmento[] = "QUE A FORCA ESTEJA COM VOCE";

void descriptografar(int chave[4], char mensagem[201]) {
     int tamanhomensagem = strlen(mensagem);
     int valor = 0;
     int diferenca = 0;

     for (int c = 0; c < 4; c ++) {
         printf("%i", chave[c]);
     }
     printf("\n");

    for (int i = 0; i < tamanhomensagem; i++) {
         for (int j = 0; j < 40; j++) {
             if (mensagem[i] == S[j]) {
                 if (chave[valor] == 0) {
                     break;
                 }
                 if (j - chave[valor] < 0) {
                     diferenca = j - chave[valor];
                     diferenca *= - 1;
                     mensagem[i] = S[40 - diferenca];
                     break;
                 }
                mensagem[i] = S[j - chave[valor]];
                break;
             }
         }
        valor++;

         if(valor == 4) {
             valor = 0;
         }
             
    }

    printf("%s", mensagem);
}

void descobre_chave(char mensagem[201]) {
    int chave[4];
    int teste[200];
    int pos1 = 0, pos2 = 0;
    int contador = 0;
    int referencia = 0;

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 40; j++) {
            if (mensagem[i] == S[j]) {
                pos1 = j;
                break;
            }
        }

        for (int cont = 0; cont < 40; cont++) {
                if (fragmento[contador] == S[cont]) {
                    pos2 = cont;
                    break;
                }
        }

        contador++;
        if(contador == 8) {
            contador = 0;
        }

        teste[i] = pos1 - pos2;
        if ((teste[i] + 40) % 40 >  1) {
            teste[i] = (teste[i] + 40) % 40;
        } else {
            teste[i] = 0;
        }

        printf("TESTE [I] valor1: %i valor2: %i, resultado %i\n", pos1, pos2, teste[i]);

        if (i>=7) { 
            if(teste[i - 7] == teste[i - 3] && teste[i - 6] == teste[i - 2] && teste[i - 5] == teste[i - 1] && teste[i - 4] == teste[i]) {
                chave[0] = teste[i - 7];
                chave[1] = teste[i - 6];
                chave[2] = teste[i - 5];
                chave[3] = teste[i - 4];
                descriptografar(chave, mensagem);
                referencia = 1;
                break;
            }
        }
    }

    if (referencia == 0) {
        printf("Mensagem nao e da Resistencia!\n");
    }

}


int main() {
    char c[201];
    fgets(c, 200, stdin);
    descobre_chave(c);
    return 0;
}