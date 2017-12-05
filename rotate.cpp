#include "rotate.hpp"

// Фун-я реа-т циклический сдвиг массива a[] размером size на shift позиций вправо
void rotate (int a[], int size, int shift) {

    for (int j = 0; j < shift; j++) {
        int buf = a[0];
        for (int i = 0; i < size; i++) {
            if (i < size - 1) {
                a[i] = a[i + 1];
            }
        }
        a[size-1] =buf;
    }
}
