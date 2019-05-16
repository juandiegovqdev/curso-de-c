//
// Created by Juan Villalobos Quiros on 07/05/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Plantilla_gol.h"

#define TAM_X 5
#define TAM_Y 5

void gol_init(bool[ *][ *]);

void gol_print(bool[ *][ *]);

void gol_step(bool[ *][ *], bool[ *][ *]);

int gol_count_neighbors(bool[ *][ *]);

bool gol_get_cell(bool[ *][ *], int, int);

void gol_copy(bool[ *][ *], bool[ *][ *]);

int main() {
    int i = 0;
    // TODO: Declara dos mundos
    bool mundo_a[TAM_X][TAM_Y];/* = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
    };*/

    bool mundo_b[TAM_X][TAM_Y];

    // TODO: inicializa el mundo
    /*
    mundo_a[TAM_X][TAM_Y] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}
    };
    */

    do {
        printf("\033cIteration %d\n", i++);
        // TODO: Imprime el mundo
        // TODO: Itera
    } while (getchar() != 'q');

    return EXIT_SUCCESS;
}

void gol_init(bool mundo_a[TAM_X][TAM_Y]) {
    // TODO: Poner el mundo a false

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

void gol_step(bool mundo_a, bool mundo_b) {
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

int gol_count_neighbors(bool mundo /* Recibo un mundo y unas coordenadas */) {
    // Devuelve el número de vecinos
}

bool gol_get_cell(

&
bool mundo[][],
int x,
int y /* Recibo un mundo y unas coordenadas */) {
/*
 * TODO: Devuelve el estado de la célula de posición indicada
 * (¡cuidado con los límites del array!)
 */
return mundo[x][y];
}

void gol_copy(bool mundo_a, bool mundo_b) {
    // TODO: copia el mundo segundo mundo sobre el primero
    for (int i = 0; i < TAM_X; i++) {
        for (int j = 0; i < TAM_Y; j++) {
            mundo_a[i][j] = mundo_b[i][j];
        }
    }
}
