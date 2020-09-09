//
// Created by Eduardo C. Andrade on 24/08/2020.
//
#include <stdio.h>

struct Tupla {
    int a, b;
};

void divisor(int x, struct Tupla *notas, int tam);
int repetidos(int numeros[], int tam);

int main() {
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

    printf("373 em notas\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\t= %d\n", notas[i].a, notas[i].b);
    }
    printf("\n3765s em HH:MI:SS\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d\t= %d\n", tempo[i].a, tempo[i].b);
    }
}

void divisor(int x, struct Tupla *notas, int tam) {
    if (x <= 0) { printf("Favor inserir valores maiores que 0.\n"); }

    for (int i = 0; i < tam; ++i) {
        notas[i].b = x / notas[i].a;
        x = x % notas[i].a;
    }
}

int repetidos(int numeros[], int tam){
    
}