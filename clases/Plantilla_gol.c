//
// Created by Juan Villalobos Quiros on 07/05/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Plantilla_gol.h"

int main() {
    int i = 0;
    // TODO: Declara dos mundos
    bool mundo_a[TAM_X][TAM_Y];
    bool mundo_b[TAM_X][TAM_Y];

    // TODO: inicializa el mundo
    mundo_a[0][0] = 0;
    mundo_a[0][1] = 0;
    mundo_a[0][2] = 0;
    mundo_a[0][3] = 0;
    mundo_a[0][4] = 0;
    mundo_a[1][0] = 0;
    mundo_a[1][1] = 0;
    mundo_a[1][2] = 0;
    mundo_a[1][3] = 0;
    mundo_a[1][4] = 0;
    mundo_a[2][0] = 0;
    mundo_a[2][1] = 1;
    mundo_a[2][2] = 1;
    mundo_a[2][3] = 1;
    mundo_a[2][4] = 0;
    mundo_a[3][0] = 0;
    mundo_a[3][1] = 0;
    mundo_a[3][2] = 0;
    mundo_a[3][3] = 0;
    mundo_a[3][4] = 0;
    mundo_a[4][0] = 0;
    mundo_a[4][1] = 0;
    mundo_a[4][2] = 0;
    mundo_a[4][3] = 0;
    mundo_a[4][4] = 0;

    do {
        printf("\033cIteration %d\n", i++);
        // TODO: Imprime el mundo
        // TODO: Itera
        for (i = 0; i < TAM_X; i++) {
            for (int j = 0; j < TAM_Y; j++) {
                printf("%c ", mundo_a[i][j] ? '#' : '.');
            }
            printf("\n");
        }
    } while (getchar() != 'q');

    return EXIT_SUCCESS;
}

void gol_init(bool mundo_a[TAM_X][TAM_Y]) {
    // TODO: Poner el mundo a false
    for (int i = 0; i < TAM_X; i++) {
        for (int j = 0; j < TAM_Y; j++) {
            mundo_a[i][j] == '.';
        }
    }

    /* TODO: Inicializar con el patrón del glider:
     *           . # .
     *           . . #
     *           # # #
     */
}

void gol_print(bool mundo_a[TAM_X][TAM_Y]) {
    // TODO: Imprimir el mundo por consola. Sugerencia:
    /*
     *     . # . . . . . . . .
     *     . . # . . . . . . .
     *     # # # . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     *     . . . . . . . . . .
     */
    for (int i = 0; i < TAM_X; i++) {
        for (int j = 0; j < TAM_Y; j++) {
            printf("%c ", mundo_a[i][j] ? '#' : '.');
        }
        printf("\n");
    }
}

void gol_step(bool mundo_a[TAM_X][TAM_Y], bool mundo_b[TAM_X][TAM_Y]) {
    /*
     * TODO:
     * - Recorrer el mundo célula por célula comprobando si nace, sobrevive
     *   o muere.
     *
     * - No se puede cambiar el estado del mundo a la vez que se recorre:
     *   Usar un mundo auxiliar para guardar el siguiente estado.
     *
     * - Copiar el mundo auxiliar sobre el mundo principal
     */
}

int gol_count_neighbors(bool mundo[TAM_X][TAM_Y], int x, int y) {
    // Devuelve el número de vecinos
    int i = 0;
    if (mundo[x - 1][y + 1]) {
        i++;
    }
    if (mundo[x][y + 1]) {
        i++;
    }
    if (mundo[x + 1][y + 1]) {
        i++;
    }
    if (mundo[x - 1][y]) {
        i++;
    }
    if (mundo[x + 1][y]) {
        i++;
    }
    if (mundo[x - 1][y - 1]) {
        i++;
    }
    if (mundo[x][y - 1]) {
        i++;
    }
    if (mundo[x + 1][y - 1]) {
        i++;
    }
    return i;
}

bool gol_get_cell(bool mundo[TAM_X][TAM_Y], int x, int y) {
/*
 * TODO: Devuelve el estado de la célula de posición indicada
 * (¡cuidado con los límites del array!)
 */
    if (x > TAM_X || y > TAM_Y) {
        printf("No se puede obtener el estado de la célula de la posición indicada.");
        return 0;
    } else {
        return mundo[x][y];
    }
}

void gol_copy(bool mundo_a[TAM_X][TAM_Y], bool mundo_b[TAM_X][TAM_Y]) {
    // TODO: copia el mundo segundo mundo sobre el primero
    for (int i = 0; i < TAM_X; i++) {
        for (int j = 0; i < TAM_Y; j++) {
            mundo_a[i][j] = mundo_b[i][j];
        }
    }
}
