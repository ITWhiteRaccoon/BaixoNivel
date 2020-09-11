//
// Created by Eduardo C. Andrade on 11/09/2020.
//

#include "Ponteiros.h"

int indexOf(int n, int *arr, int size) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) == n) {
            return i;
        }
    }
    return index;
}

void copy(int *arrA, int *arrB, int size) {
    for (int i = 0; i < size; ++i) {
        *(arrB + i) = *(arrA + i);
    }
}

void invert(int *arr, int size) {
    for (int low = 0, high = size - 1; low < high; ++low, --high) {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
}
