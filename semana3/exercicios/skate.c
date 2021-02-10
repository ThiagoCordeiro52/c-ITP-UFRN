#include <stdio.h>

int verifica_score(int valor1, int valor2, int valor3) {

    if(valor3 == valor1 || valor3 == valor2) {
        return valor3;
    }
    if (valor2 == valor1 || valor3 == valor2) {
        return valor2;
    }
    if (valor1 == valor2 || valor1 == valor3) {
        return valor1;    
    }

    if(valor1 > valor3 && valor2 < valor3 || valor2 > valor3 && valor1 < valor3) {
        return valor3;
    } else if(valor2 > valor1 && valor3 < valor1 ||valor3 > valor1 && valor2 < valor1) {
        return valor1;
    } else if(valor3 > valor2 && valor1 < valor2 || valor1 > valor2 && valor3 < valor2) {
        return valor2;
    }
}


int main() {
    int ad1v1, ad1v2, ad1v3, ad2v1,ad2v2, ad2v3,
    ad3v1, ad3v2, ad3v3;
    int bd1v1, bd1v2, bd1v3, bd2v1,bd2v2, bd2v3,
    bd3v1, bd3v2, bd3v3;
    int ascore, bscore, a1score, a2score, a3score, b1score, b2score, b3score;
    a1score =  a2score  = a3score = ascore = 0;
    b1score = b2score = b3score =bscore = 0;
    scanf(" %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &ad1v1, &ad1v2, &ad1v3, &ad2v1,&ad2v2,&ad2v3, &ad3v1, &ad3v2, &ad3v3, &bd1v1, &bd1v2, &bd1v3, &bd2v1, &bd2v2, &bd2v3, &bd3v1, &bd3v2, &bd3v3);
    
    a1score += verifica_score(ad1v1, ad1v2, ad1v3);
    a2score += verifica_score(ad2v1, ad2v2, ad2v3);
    a3score += verifica_score(ad3v1, ad3v2, ad3v3);
    b1score += verifica_score(bd1v1, bd1v2, bd1v3);
    b2score += verifica_score(bd2v1, bd2v2, bd2v3);
    b3score += verifica_score(bd3v1, bd3v2, bd3v3);

    ascore += verifica_score(a1score, a2score, a3score);
    bscore += verifica_score(b1score, b2score, b3score);

    if(ascore == bscore) {
        printf("empate\n");
    } else if (bscore > ascore) {
        printf("B\n");
    } else {
        printf("A\n");
    }
    
    return 0;
}