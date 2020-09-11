cmake_minimum_required(VERSION 3.17)
project(BaixoNivel C)

set(CMAKE_C_STANDARD 11)

add_executable(BaixoNivel
        Main.c Parametros.c Parametros.h Ponteiros.c Ponteiros.h)
