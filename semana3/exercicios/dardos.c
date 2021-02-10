#include <stdio.h>
#include <math.h>


double calcula_bonus(double valor) {
    if (valor > 3) {
        return 0;
    }

    if (valor >= 0 && valor <= 1) {
        return 5;
    }

    if (valor > 1 && valor <= 2) {
        return 3;
    }

    if (valor > 2 && valor <=3) {
        return 2;
    }
}

double calcula_pontos(double valor) {
    if (valor > 3) {
        return 0;
    }

    if (valor >= 0 && valor <= 1) {
        return 10;
    }

    if (valor > 1 && valor <= 2) {
        return 6;
    }

    if (valor > 2 && valor <=3) {
        return 4;
    }
}

double calcula_distancia(double p, double q) {
    double distancia;
    distancia = sqrt((0 - p)*(0 - p) + (0 - q) * (0 - q));
    return distancia;
}

double calcula_distancia_antes(double p, double q, double p_antes, double q_antes) {
    double distancia;
    distancia = sqrt((p_antes - p)*(p_antes - p) + (q_antes - q) * (q_antes - q));
    return distancia;
}

int main() {
    double x, y, x_antes, y_antes, distancia;
    int i, pontuacao;
    
    pontuacao = 0;

    for (i=1; i<=10; i++) {
        if (i >= 2) {
            x_antes = x;
            y_antes = y;
        }
        scanf(" %lf %lf", &x, &y);
        distancia = calcula_distancia(x, y);
        pontuacao += calcula_pontos(distancia);

        if (i >= 2) {
            distancia = calcula_distancia_antes(x, y, x_antes, y_antes);
            pontuacao += calcula_bonus(distancia);
        }

  
    }
    
    printf("%i\n", pontuacao);

}