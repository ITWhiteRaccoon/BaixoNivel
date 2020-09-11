//
// Created by Eduardo C. Andrade on 11/09/2020.
//

#include <stdio.h>
#include "Parametros.h"

void divisor(int x, struct Tupla *notas, int tam) {
    if (x <= 0) { printf("Favor inserir valores maiores que 0.\n"); }

    for (int i = 0; i < tam; ++i) {
        notas[i].b = x / notas[i].a;
        x = x % notas[i].a;
    }
}