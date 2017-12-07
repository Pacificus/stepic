#ifndef _MATRIX_

#define _MATRIX_
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int** createMatrix(int m , int n);
void removeMatrix(int** matrix, int m, int n);
void showArray(int* p, int size);
void showMatrix(int** p, int m, int n);
void intializeArrayByNum(int* p, int size, int num);
void swap_min(int *m[], unsigned rows, unsigned cols);

#endif
