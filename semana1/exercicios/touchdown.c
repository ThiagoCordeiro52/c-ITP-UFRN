//  A liga de futebol americano NFL resolveu abandonar as fichinhas de papel e construir um programa para computar os resultados dos jogos de futebol americano. Para saber se é possível, eles pediram que você escreva um programa de teste para o jogo dos Saints contra os Bucaneers.

//     Existem três dados que marcam pontuação no jogo:

//         * TD (Touch Down) - vale 6 pontos

//         * FG (Field Goal) - vale 3 pontos

//         * PAT (Ponto Extra) - vale 1 ponto

//     Faça um programa que leia da entrada 6 valores inteiros: os três primeiros representam TD, FG e PAT do New Orleans Saints. Os próximos três valores representam TD, FG e PAT do Tampa Bay Bucaneers. 

//     Seu programa deve calcular o placar e imprimir o resultado e o time que venceu, ou que o jogo vai para prorrogação em caso de empate.

    #include <stdio.h>

    int main() {
        int TD_NO, FG_NO, PAT_NO, TD_BB, FG_BB, PAT_BB;
        int NO, BB;

        scanf("%i %i %i", &TD_NO, &FG_NO, &PAT_NO);
        scanf("%i %i %i", &TD_BB, &FG_BB, &PAT_BB);

        TD_NO = TD_NO * 6;
        FG_NO = FG_NO * 3;
        
        TD_BB = TD_BB * 6;
        FG_BB = FG_BB * 3;

        NO = TD_NO + FG_NO + PAT_NO;
        BB = TD_BB + FG_BB + PAT_BB;

        printf("Placar: Saints %ix%i Bucaneers\n", NO, BB);

        if (NO == BB) {
            printf("Empate!\n");
        } else if (NO > BB) {
            printf("Saints venceu!\n");
        } else {
            printf("Bucaneers venceu!\n");
        }
        return 0;
    }