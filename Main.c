//
// Created by Eduardo C. Andrade on 11/09/2020.
//
#include <stdio.h>
#include "Parametros.h"
#include "Ponteiros.h"

void testePonteiros();

void testeParametros();

void printArray(int arr[], int arrSize);

int main() {
    testeParametros();
    testePonteiros();
}

void testePonteiros() {
    int n[] = {1, 2, 3, 6, 6, 8, 2, 3};
    int arrSize = 8;
    printArray(n,arrSize);
    printf("\nindexOf(6) = %d\n", indexOf(6, n, 8));

    int k[8];
    copy(n, k, 8);
    printArray(k,arrSize);

    invert(k, 8);
    printArray(k,arrSize);
}

void testeParametros() {
    struct Tupla notas[] = {{100, 0},
                            {50,  0},
                            {10,  0},
                            {5,   0},
                            {1,   0}};

    struct Tupla tempo[] = {{3600, 0},
                            {60,   0},
                            {1,    0}};

    divisor(373, notas, 5);
    divisor(3765, tempo, 3);

    printf("\n373 em notas\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t= %d\n", notas[i].a, notas[i].b);
    }
    printf("\n3765s em HH:MI:SS\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d\t= %d\n", tempo[i].a, tempo[i].b);
    }
}

void printArray(int arr[], int arrSize) {
    printf("{ ");
    for (int i = 0; i < arrSize; ++i) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}