#include "matrix.hpp"

int** createMatrix(int m , int n) {
    int** matrix = new int*[m];
    matrix[0] = new int[m * n];
    for (int i = 1; i < m; i++) {
        matrix[i] = matrix[i - 1] + n;
    }
    return matrix;
}

void removeMatrix(int** matrix, int m, int n) {
    delete []matrix[0];
    delete []matrix;
}

void showArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        if ((i + 1) % 10 == 0) cout << endl;
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void showMatrix(int** p, int m, int n) {
    for (int i = 0; i < m; i++) {
        showArray(*(p + i), n);
    }
}

void intializeArrayByNum(int* p, int size, int num) {
    for (int i = 0; i < size; i++) {
        *(p + i) = num;
    }
}

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    /* ... */
    int min = m[0][0];
    int min_row = 0;

    //...find minimum of matrix and location of minimum array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*(*(m + i) + j) < min) {
                min = *(*(m + i) + j);
                min_row = i;
            }
        }
    }
    //...swap is correct only for index != 0..!!! cause in Clion runtime Error
    int* tmp = *(m + 1);
    *(m + 1) = *(m + min_row);
    *(m + min_row) = tmp;  
}

