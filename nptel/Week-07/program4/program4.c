// Write a C program to print lower triangle of a square matrix.

// For example the output of a given matrix 

// 2 3 4     will be       2 0 0

// 5 6 7                      5 6 0

// 4 5 6                      4 5 6

#include<stdio.h>
int main(){
    int n;
    printf("Enter the order of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the Square Matrix: \n");

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Lower Triange of Matrix: \n");

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i>=j){
                printf("%d ", matrix[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}