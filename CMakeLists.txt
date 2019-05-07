cmake_minimum_required(VERSION 3.12)
project(cursodec C)

set(CMAKE_C_STANDARD 99)

add_executable(cursodec clases/JuegoDeLaVida.c clases/PrimeraClase.c clases/SegundaClase.c cabeceras/PrimeraClase.h cabeceras/SegundaClase.h cabeceras/JuegoDeLaVida.h clases/Ejecutable.c cabeceras/Ejecutable.h clases/JuegoDeLaVidaV2.c clases/Main.c clases/Plantilla_gol.c cabeceras/Plantilla_gol.h)