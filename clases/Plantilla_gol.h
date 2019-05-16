//
// Created by Juan Villalobos Quiros on 07/05/2019.
//

#ifndef CURSODEC_PLANTILLA_GOL_H
#define CURSODEC_PLANTILLA_GOL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM_X 5
#define TAM_Y 5

void gol_init(bool[ *][ *]);

void gol_print(bool[ *][ *]);

void gol_step(bool[ *][ *], bool[ *][ *]);

int gol_count_neighbors(bool[ *][ *], int, int);

bool gol_get_cell(bool[ *][ *], int, int);

void gol_copy(bool[ *][ *], bool[ *][ *]);

#endif //CURSODEC_PLANTILLA_GOL_H
