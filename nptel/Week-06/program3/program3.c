// Write a C program to read Two One Dimensional Arrays of same data type (integer type) and merge them into another One Dimensional Array of same type.

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter no of first elements: ");
    scanf("%d", &n1);

    printf("Enter no of second elements: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], mergedArray[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        mergedArray[n1 + i] = arr2[i];
    }

    printf("Merged Array: ");

    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
