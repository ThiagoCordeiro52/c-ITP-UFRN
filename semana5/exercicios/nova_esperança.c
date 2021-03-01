#include <stdio.h>
#include <string.h>
const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
     'A','B','C','D','E','F','G','H','I','J',
     'K','L','M','N','O','P','Q','R','S','T',
     'U','V','W','X','Y','Z','.',',','?',' '};

 void criptografar(int chave[4], char mensagem[201]) {
     int tamanhomensagem = strlen(mensagem);
     int valor = 0;
     int diferenca = 0;

    for (int i = 0; i < tamanhomensagem ; i++) {
         for (int j = 0; j < 40; j++) {
             if (mensagem[i] == S[j]) {
                 if (chave[valor] == 0) {
                     break;
                 }
                 if (j + chave[valor] > 39) {
                     diferenca = j + chave[valor] - 39;
                     mensagem[i] = S[diferenca - 1];
                     break;
                 }
                mensagem[i] = S[j + chave[valor]];
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

int main() {
    char p[201];
    int k[4];
    int tamanhop, tamanhos;
    int correto = 1;
    int contador = 0;

    for (int contador = 0; contador < 4; contador++) {
        scanf("%i", &k[contador]);

        if(k[contador] < 0 || k[contador] > 9999) {
        printf("Chave invalida!");
        return 0;
    }

    }
    // 1234
    int unidade = k[0] / 1 % 10;
    int dezena = k[0] / 10 % 10;
    int centena = k[0] / 100 % 10;
    int milhar = k[0] / 1000 % 10;

    k[0] = milhar;
    k[1] = centena;
    k[2] = dezena;
    k[3] = unidade;


    fgets(p, 200, stdin);

    tamanhop = strlen(p);



    for (int i = 0; i < tamanhop - 2; i++) {
         for (int j = 0; j < 40; j++) {
             if (p[i] == S[j]) {
                 contador++;
             }
         }

         if(contador == 0) {
             correto =  0;
         }

        contador = 0;
    }

    if (correto == 0) {
        printf("Caractere invalido na entrada!\n");
        return 0;
    }

    tamanhop = strlen(p);

    criptografar(k, p);

    return 0;
}