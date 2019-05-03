//
// Created by Juan Villalobos Quiros on 03/05/2019.
//

#include <stdlib.h>
#include <printf.h>

void abrirPrimeraClase();


void MainFunction(){
    printf("¿Qué quieres realizar?\n");
    printf("1 - Ejecutar código fuente de las clases.\n");
    printf("2 - Ejecutar código del Juego de la Vida (Game Of Life).");

    abrirPrimeraClase();
}

void abrirPrimeraClase(){
    system("open https://www.youtube.com/watch?v=C0UiG1uYgYQ&feature=youtu.be");
}

void abrirSegundaClase(){
    system("open https://example.com");
}

void abrirTerceraClase(){
    system("open https://example.com");
}