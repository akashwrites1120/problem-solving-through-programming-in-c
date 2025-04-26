// Write a C program to find the sum of all elements of each row of a matrix.
// Example: For a matrix 4 5 6
//                                     6 7 3
//                                     1 2 3
//  The output will be
// 15
//  16
//  6

#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of matrix: ");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of elements of each row: \n");

    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("%d\n", rowSum);
    }

    return 0;
}