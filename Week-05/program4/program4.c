// Write a C program to print the following Pyramid pattern upto Nth row. Where N (number of rows to be printed) is taken as input.
// For example when the value of N is 5 the pyramid will be printed as follows
// *****
// ****
// ***
// **
// *

#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = n; i>0;i-- ){
        for(int j = 0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}