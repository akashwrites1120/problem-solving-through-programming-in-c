//Write a program to find the factorial of a given number using while loop.

#include<stdio.h>
int main(){
    long int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;

    while(i <= n){
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}