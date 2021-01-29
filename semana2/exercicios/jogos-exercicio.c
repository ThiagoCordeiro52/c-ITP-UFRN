//  A liga de futebol americano NFL resolveu abandonar as fichinhas de papel e construir um programa para computar os resultados dos jogos de futebol americano. Para saber se é possível, eles pediram que você escreva um programa de teste para o jogo dos Saints contra os Bucaneers.

// Existem três dados que marcam pontuação no jogo:

// TD (Touch Down) - vale 6 pontos
// FG (Field Goal) - vale 3 pontos
// PAT (Ponto Extra) - vale 1 ponto
// Para calcular qual a pontuação foi feita em algum jogo, você precisaria apenas somar quantos TD, FG e PAT foram feitos multiplicados pelos seus valores. Porém como para a NFL qualquer estatística tem algum valor, eles pediram para que você faça um programa que receba como entrada uma sequência com os resultados de todos os jogos entre dois times e indique:

// Qual time é o campeão da série histórica (qual time teve maior pontuação total somada)
// Qual marcou mais Touch Downs(TD)
// Qual marcou mais Field Goals(FG)
// Qual marcou mais Pontos Extras(PAT)
// Mais uma vez estaremos analisando o New Orleans Saints e o Tampa Bay Bucaneers, porém usando um conjunto com os resultados de N jogos entre eles. Seu programa deve ler o número N de jogos e, em seguida, ler 2*N triplas contendo os TD, FG e PAT de cada jogo para cada uma das equipes (Saints primeiro, depois Bucaneers). Com os resultados o programa deve calcular as estatísticas e imprimí-las como mostram os exemplos.

#include <stdio.h>

int main() {
    int jogos, i, pontos_s, pontos_b;
    int td_s, fg_s,  pat_s, td_b, fg_b,  pat_b;
    int Td_s, Fg_s,  Pat_s, Td_b, Fg_b,  Pat_b;

    pontos_s = pontos_b = 0;

    td_s = fg_s =  pat_s = td_b = fg_b =  pat_b = 0;
    Td_s = Fg_s =  Pat_s = Td_b = Fg_b =  Pat_b = 0;


    scanf("%i", &jogos);

    for (i = 0; i < jogos; i++) {
        td_s = fg_s =  pat_s = td_b = fg_b =  pat_b = 0;
        scanf(" %i %i %i", &td_s, &fg_s, &pat_s);
        Td_s += td_s;
        Fg_s += fg_s;
        Pat_s += pat_s;
        td_s *= 6;
        fg_s *= 3;
        pontos_s += (td_s + fg_s + pat_s);
        scanf(" %i %i %i", &td_b, &fg_b, &pat_b);
        Td_b += td_b;
        Fg_b += fg_b;
        Pat_b += pat_b;
        td_b *= 6;
        fg_b *= 3;
        pontos_b += (td_b + fg_b + pat_b);
    }
    if (pontos_b == pontos_s) {
        printf("Série histórica empatada em %i pontos! \n", pontos_s);
    } else {
        if (Td_s > Td_b) {
            printf("Saints é o campeão na série histórica!\n");
        } else {
            printf("Bucaneers é o campeão na série histórica!\n");
        }

        if (pontos_s > pontos_b) {
            printf("Placar: %i x %i\n", pontos_s, pontos_b);
        } else {
            printf("Placar: %i x %i\n", pontos_b, pontos_s);
        }
    }

    if (Td_b == Td_s) {
        printf("Número de Touch Downs empatado(%i)\n", Td_s);
    } else {
        if (Td_s > Td_b) {
            printf("Saints marcou mais Touch Downs(%i)\n", Td_s);
        } else {
            printf("Bucaneers marcou mais Touch Downs(%i)\n", Td_b);
        }
    }

    if (Fg_b == Fg_s) {
        printf("Número de Field Goals empatado(%i)\n", Fg_s);
    } else {
        if (Fg_s > Fg_b) {
            printf("Saints marcou mais Field Goals(%i)\n", Fg_s);
        } else {
            printf("Bucaneers marcou mais Field Goals(%i)\n", Fg_b);
        }
    }

    if (Pat_b == Pat_s) {
        printf("Número de Pontos Extras empatado(%i)\n", Pat_b);
    } else {
        if (Pat_s > Pat_b) {
            printf("Saints marcou mais Pontos Extras(%i)\n", Pat_s);
        } else {
            printf("Bucaneers marcou mais Pontos Extras(%i)\n", Pat_b);
        }
    }
    return 0;
}