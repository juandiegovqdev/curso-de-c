cmake_minimum_required(VERSION 3.12)
project(cursodec C)

set(CMAKE_C_STANDARD 99)

add_executable(cursodec clases/JuegoDeLaVida.c clases/PrimeraClase.c clases/SegundaClase.c clases/PrimeraClase.h clases/SegundaClase.h clases/JuegoDeLaVida.h clases/Ejecutable.c clases/Ejecutable.h clases/JuegoDeLaVidaV2.c clases/Main.c clases/Plantilla_gol.c clases/Plantilla_gol.h)