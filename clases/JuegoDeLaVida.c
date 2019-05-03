#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

// Cantidad de filas y columnas
#define COLS 40
#define FILS 20

// Ciclo de repeticiones
#define NoCicloVida 200

// Número minimo de celulas vivas que han de rodear a una celula viva para que no se muera
#define NoMin 2 //2
//numero maximo de celulas vivas que han de rodear a una celula viva para que no se muera
#define NoMax 3 //4
//numero minimo de celulas vivas que han de rodear a una celula muerta para que vuelva a vivir
#define NoMinVive 2 //2
//numero maximo de celulas vivas que han de rodear a una celula muerta para que vuelva a vivir
#define NoMaxVive 3 //3

//espacio donde estaran las celulas
char vecindad[FILS][COLS];

//Reglas para vivir o morir
int vida[4] = {NoMin,NoMax,NoMinVive,NoMaxVive};

/*****************************+FUNCIONES PROTOTIPO+***************************/
void vecindadInicial();
void poblarVecindad();
void pintarVecindad();
int analizarVecinos(int,int);
void cicloCelular();
/*****************************************************************************/

void vecindadInicial(){
    int i,j;
    for (i = 0; i < FILS; i++){
        for (j = 0; j < COLS; j++){
            vecindad[i][j] = '_';
        }
    }
}

void poblarVecindad(){
    int fil,x,y;
    srand((unsigned int) time(NULL));

    // Crear celulas de manera aleatoria
    for (fil = 0; fil < COLS; ++fil){
        y = rand()%COLS;
        x = rand()%FILS;
        if(vecindad[x][y]=='_')
            vecindad[x][y]='O';
    }
}

void pintarVecindad(){
    int i,j;
    for (i = 0; i < FILS; i++){
        printf("\n");
        for (j = 0; j < COLS; j++){
            printf("%c",vecindad[i][j] );
        }
    }
    printf("\n");
}

/*******************************
****                        ****
****        |_|_|_|         ****
****        |_|_|_|         ****
****        |_|_|_|         ****
****                        ****
********************************/

int analizarVecinos(int posf, int posc){
    //contador de celulas (vecinos)
    int vecinos = 0;
    if(posf-1 >= 0 && posc-1 >= 0)
        if(vecindad[posf-1][posc-1] == 'O')
            vecinos++;
    if(posf-1 >= 0)
        if(vecindad[posf-1][posc] == 'O')
            vecinos++;
    if(posf-1 >= 0 && posc+1 <= COLS-1)
        if(vecindad[posf-1][posc+1] == 'O')
            vecinos++;
    if(posc-1 >= 0)
        if(vecindad[posf][posc-1] == 'O')
            vecinos++;
    if(posc+1 <= COLS-1)
        if(vecindad[posf][posc+1] == '0')
            vecinos++;
    if(posf+1 <= FILS-1 && posc-1 >= 0)
        if(vecindad[posf+1][posc-1] == 'O')
            vecinos++;
    if(posf+1 <= FILS-1)
        if(vecindad[posf+1][posc] == 'O')
            vecinos++;
    if(posf+1 <= FILS-1 && posc+1 <= COLS-1)
        if(vecindad[posf+1][posc+1] == 'O')
            vecinos++;

    return vecinos;
}

void cicloCelular(){
    int fil,col;
    int n_vecinos;

    //ciclo principal
    for(fil = 0; fil < FILS; fil++){
        for(col = 0; col < COLS; col++){
            n_vecinos = analizarVecinos(fil,col);

            //condiciones para que una celula no muera
            if(vecindad[fil][col] == '_'){
                if(n_vecinos == NoMinVive || n_vecinos == NoMaxVive)
                    vecindad[fil][col] = 'O';
                else
                    vecindad[fil][col] = '_';
            }
            else if(vecindad[fil][col] == 'O'){
                if(n_vecinos == NoMin || n_vecinos == NoMax)
                    vecindad[fil][col] = 'O';
                else
                    vecindad[fil][col] = '_';
            }
        }
    }
}

/*
int main(int argc, char *argv[])
{
    int i=0;

    vecindadInicial();
    poblarVecindad();

    while(i < NoCicloVida){
        pintarVecindad();
        usleep(100000);
        system("clear");
        cicloCelular();
        i++;
    }

    return 0;
}
*/