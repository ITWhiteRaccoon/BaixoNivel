//
// Created by Eduardo C. Andrade on 24/08/2020.
//
#include <stdio.h>

void caixaBanco(int x);

int main() {
    int t = 373;
    caixaBanco(t);
}

void caixaBanco(int x) {
    if (x <= 0) { printf("Favor inserir valores maiores que 0.\n"); }

    int nota100 = x / 100;
    x = x % 100;

    int nota50 = x / 50;
    x = x % 50;

    int nota10 = x / 10;
    x = x % 10;

    int nota5 = x / 5;
    x = x % 5;

    int nota1 = x / 1;

    printf("Notas\tQtd\n");
    printf("100\t%d\n", nota100);
    printf("50\t%d\n", nota50);
    printf("10\t%d\n", nota10);
    printf("5\t%d\n", nota5);
    printf("1\t%d\n", nota1);
}

