//
// Created by Juan Villalobos Quiros on 02/05/2019.
//

#include <stdio.h> //
#include <string.h> //
#include <math.h> //
#include <stdbool.h> // Librería para declarar true y false.
#include <stdint.h>
#include <stdlib.h>

#define TAM_X 10
#define TAM_Y 10
#define true 1 // MACROS
#define false 0 // MACROS
#define viva 1 // MACROS
#define muerta 0 // MACROS
#define filasRejilla 5 // MACROS
#define columnaRejilla 5 // MACROS
#define TAM_FILA 2 // MACROS
#define TAM_COLUMNA 3 // MACROS

// [u]int_least32_t -> Estamos marcando el tamaño de la memoria.
// Podemos encontrar estas variables en la librería stdint.h.

// typedef enum { false, true } boolean; -> creación del
// tipo bool de manera manual.
typedef int booleano;

int primeraClase(){
    printf("---------------------------\n");
    printf("Primera clase: C\n");
    printf("Alumno: Juan Diego Villalobos Quirós\n");
    printf("Escuela Técnica Superior de Ingeniería Informática\n");
    printf("Jueves, 2 de mayo de 2019.\n");
    printf("---------------------------\n");
    printf("Hola mundo!\n");
    printf("---------------------------\n");
    int varEntero = 42;
    printf("Var = %d\n", varEntero);
    float varFloat = 5.5f;
    booleano varBool = true;
    printf("var1 = %d, var2 = %d\n", varEntero, varBool);
    printf("varEntero = %d\n", varEntero);
    printf("varFloat = %f\n", varFloat);
    printf("varBool = %d\n", varBool);
    printf("---------------------------\n");
    printf("Tamaño de varEntero = %i\n", sizeof(varEntero));
    int c = sizeof(varEntero) + 10;
    printf("sizeof(varEntero) = 4\n");
    printf("sizeof(varEntero) + 10 = %d\n", c);
    printf("---------------------------\n");
    int array[5] = {1, 2, 3, 4, 5};
    printf("int array[5] = {1, 2, 3, 4, 5}; -> Definición de un array.\n");
    printf("Array de tamaño 5, de cinco números enteros.\n");
    printf("---------------------------\n");
    printf("Vectores: \n");
    int i;
    int vector1[10];
    int vector2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for(i = 0; i < 10; i++){
        vector1[i] = vector2[i];
    }
    for(i = 0; i < 10; i++){
        printf("%d ", vector1[i]+1);
    }
    // _?_:_;
    // esLunes ? "si, lo es" : "no, no lo es"
    printf("\n");
    int tamVector1 = sizeof(vector1)/sizeof(int);
    int tamVector2 = sizeof(vector2)/sizeof(int);
    printf("Tamaño del vector 1: %d\n", tamVector1);
    printf("Tamaño del vector 2: %d\n", tamVector2);
    printf("---------------------------\n");
    printf("Arrays de caracteres: \n");
    char hola[] = {'H', 'o', 'l', 'a', '\0'};
    char mundo[] = "mundo";
    printf("%s %s\n", hola, mundo);
    for (i = 0; i < 4; i++){
        printf("%c", hola[i]);
    }
    printf(" ");
    for (i = 0; i < 5; i++){
        printf("%c", mundo[i]);
    }
    printf("\n");
    printf("---------------------------\n");
    printf("Arrays multidimensionales: \n");
    int arrayMultidimen[TAM_FILA][TAM_COLUMNA] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}};
    // int array[fila][columna]
    int arrayEjercicio[2][3];
    arrayEjercicio[0][0] = 0;
    arrayEjercicio[0][1] = 1;
    arrayEjercicio[0][2] = 2;
    arrayEjercicio[1][0] = 3;
    arrayEjercicio[1][1] = 4;
    arrayEjercicio[1][2] = 5;
    int fila;
    int columna;
    for(fila = 0; fila < TAM_FILA; fila++){
        for(columna = 0; columna < TAM_COLUMNA; columna++){
            printf("[%d][%d] = %d ", fila+1, columna+1, arrayEjercicio[fila][columna]);
        }
        printf("\n");
    }
    printf("---------------------------\n");
    printf("Juego de la vida.\n");
    int rejilla[5][5];
    printf("---------------------------\n");
    i = 0;
    bool mundo0[TAM_X][TAM_Y] = {
            {0, 1, 0},
            {0, 0, 1},
            {1, 1, 1}
    };
    bool mundo1[TAM_X][TAM_Y];
    // TODO: Declara dos mundos
    // TODO: Inicializa el mundo
    do {
        printf("\033cIteration %d\n");
        // TODO: Imprime el mundo
        // TODO: Itera
    } while (getchar() != 'q');
    printf("---------------------------\n");
    printf("---------------------------\n");
    printf("---------------------------\n");
    // return EXIT_SUCCESS; // stdio.h incluye EXIT_SUCCESS
    return 0;
}

/*
 * Contraseña sudo:
 *
 * d0cenc1a13
 */

/*
 * Tipos:
 * char(%c)
 * int(%i) o (%d)
 * float(%f)
 * double(%f)
 * bool
 *
 * Modificadores:
 * signed(%hh-)
 * unsigned(%u)
 * short(%h-)
 * long(%l-)
 * long long(%ll-)
 * Más información: http://cplusplus.com/reference/cstdio/printf
 */

// Para compilar un archivo .c desde consola
// tan solo tenemos que escribir el siguiente
// comando: gcc <mi_prog.c> -o <mi_exe>
// ./mi_exe -> . significa la carpeta en la
// que estamos.

// Si en la terminal escribimos: // echo $?,
// imprimiremos el return de la última
// función ejecutada. En este caso, mostrará
// por pantalla 0.
