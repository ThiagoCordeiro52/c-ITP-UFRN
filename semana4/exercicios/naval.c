#include <stdio.h>

int main() {
    char matriz[10][10];
    int l = 0, c = 0, l_anterior = 0, c_anterior = 0;

    for (int i =0; i<10; i++) {
        for (int j=0; j<10; j++) {
            matriz[i][j] = '~';
        }
    }

     scanf("%i %i", &l, &c);
     matriz[l][c] = '*';

     scanf("%i %i", &l, &c);
     l_anterior = l; 
     c_anterior = c;
     scanf("%i %i", &l, &c);

     if(l == l_anterior) {
          matriz[l_anterior][c_anterior] = '<';
          matriz[l][c] = '>';
     } else {
          matriz[l_anterior][c_anterior] = '^';
          matriz[l][c] = 'v';
     }

     scanf("%i %i", &l, &c);
     l_anterior = l; 
     c_anterior = c;
     scanf("%i %i %*i %*i", &l, &c);

     if(l == l_anterior) {
          matriz[l_anterior][c_anterior] = '<';
          matriz[l][c] = '=';
          matriz[l][c+1] = '>';
      } else {
          matriz[l_anterior][c_anterior] = '^';
          matriz[l][c] = '|';
          matriz[l+1][c] = 'v';
      }

     scanf("%i %i", &l, &c);
     l_anterior = l; 
     c_anterior = c;
     scanf("%i %i %*i %*i %*i %*i", &l, &c);

     if(l == l_anterior) {
          matriz[l_anterior][c_anterior] = '<';
          matriz[l][c] = '=';
          matriz[l][c+1] = '=';
          matriz[l][c+2] = '>';
      } else {
          matriz[l_anterior][c_anterior] = '^';
          matriz[l][c] = '|';
          matriz[l+1][c] = '|';
          matriz[l+2][c] = 'v';
      }

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}