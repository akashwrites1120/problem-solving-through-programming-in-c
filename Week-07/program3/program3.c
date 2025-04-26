// Write a C program to find subtraction of two matrices i.e. matrix_A - matrix_B=matrix_C.

//  If the given martix are 

//  2 3 5     and  1 5 2    Then the output will be  1 -2 3

//  4 5 6             2 3 4                                           2 2 2

//  6 5 7             3 3 4                                           3 2 3

//  The elements of the output matrix are separated by one blank space 

#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter number of rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int matrixA[rows][cols], matrixB[rows][cols], matrixC[rows][cols];

    printf("Enter elements of first matrix: ");

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of second matrix: ");

    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    printf("Resultant Matrix (A - B): \n");
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}