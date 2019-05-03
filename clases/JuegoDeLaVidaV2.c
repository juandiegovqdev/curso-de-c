//
// Created by Juan Villalobos Quiros on 03/05/2019.
//

#include <stdio.h> //
#include <string.h> //
#include <math.h> //
#include <stdbool.h> // Librería para declarar true y false.
#include <stdint.h>
#include <stdlib.h>

#define TAM_X 3
#define TAM_Y 3

void juegoDeLaVida() {
    bool mundo_a[TAM_X][TAM_Y] = {
            {0, 1, 0},
            {0, 0, 1},
            {1, 1, 1}
    };
    bool mundo_b[TAM_X][TAM_Y];

    int vecinasVivas = 0;
    for (int i = 0; i < TAM_X; i++) {
        for (int j = 0; j < TAM_Y; j++) {
            vecinasVivas += mundo_a[i - 1][j - 1];
            vecinasVivas += mundo_a[i - 1][j + 0];
            vecinasVivas += mundo_a[i - 1][j + 1];

            vecinasVivas += mundo_a[i + 0][j - 1];
            vecinasVivas += mundo_a[i + 0][j + 1];

            vecinasVivas += mundo_a[i + 1][j - 1];
            vecinasVivas += mundo_a[i + 1][j + 0];
            vecinasVivas += mundo_a[i + 1][j + 1];

            if (mundo_a[i][j]) {
                mundo_b[i][j] = (vecinasVivas == 3) || (vecinasVivas == 2);
            } else {
                mundo_b[i][j] = vecinasVivas == 3;
            }
        }
    }

    // Imprimir mundo
    for (int i; i < TAM_X; i++) {
        for (int j; j < TAM_Y; j++) {
            printf("%c ", mundo_a[i][j] ? '#' : '.');
        }
        printf("\n");
    }
}



