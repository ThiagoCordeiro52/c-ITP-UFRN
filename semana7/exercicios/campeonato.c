#include <stdio.h>
#include <string.h>

typedef struct campeonato
{
    char nome[201];
    int vitorias;
    int empates;
    int derrotas;
    int gols_feitos;
    int gols_sofridos;
    int pontos;
    int jogos;
    int saldo_gols;
} time;


void ler_dados(int times, time* clubes) {
    for(int i = 0; i < times; i++) {
        scanf(" %[^;]", &clubes[i].nome);
        scanf(";%i", &clubes[i].vitorias);
        scanf("%i", &clubes[i].empates);
        scanf("%i", &clubes[i].derrotas);
        scanf("%i", &clubes[i].gols_feitos);
        scanf("%i", &clubes[i].gols_sofridos);

        clubes[i].pontos = (3 * clubes[i].vitorias) + clubes[i].empates;
        clubes[i].jogos = clubes[i].vitorias + clubes[i].derrotas + clubes[i].empates;
        clubes[i].saldo_gols = clubes[i].gols_feitos - clubes[i].gols_sofridos;

    }
}

void ordenar_tabela(int tam, time* clubes) {
    time auxiliar;

    for(int i = 0; i < tam - 1; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(clubes[i].pontos < clubes[j].pontos) {
                auxiliar = clubes[i];
                clubes[i] = clubes[j];
                clubes[j] = auxiliar;
            } else if (clubes[i].pontos == clubes[j].pontos && clubes[i].vitorias < clubes[j].vitorias) {
                auxiliar = clubes[i];
                clubes[i] = clubes[j];
                clubes[j] = auxiliar;
            } else if(clubes[i].pontos == clubes[j].pontos && clubes[i].vitorias == clubes[j].vitorias && clubes[i].saldo_gols < clubes[j].saldo_gols) {
                auxiliar = clubes[i];
                clubes[i] = clubes[j];
                clubes[j] = auxiliar;
            }
        }
    }

}

void imprimir_tabela(int tam, time* clubles) {
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for (int i = 0; i < tam; i++) {
        printf("%s| %i| %i| %i| %i| %i| %i| %i| %i\n", clubles[i].nome, clubles[i].pontos, clubles[i].jogos, clubles[i].vitorias, clubles[i].empates, clubles[i].derrotas, clubles[i].gols_feitos, clubles[i].gols_sofridos, clubles[i].saldo_gols);
    }
    printf("\n\n");
    printf("Times na zona da libertadores:\n");
    for(int i = 0; i < 6; i++ ) {
        printf("%s\n", clubles[i].nome);
    }
    printf("\n\n");
    printf("Times rebaixados:\n");
    for (int i = tam - 1; i > tam - 3; i--) {
        printf("%s\n", clubles[i].nome);
    }
}

int main() {
    int times;
    scanf("%i", &times);
    time clubes[times];

    ler_dados(times, clubes);
    ordenar_tabela(times, clubes);
    imprimir_tabela(times, clubes);


    return 0;
}