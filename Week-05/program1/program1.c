//Write a C program to check whether a given number (N) is a perfect number or not?[Perfect Number - A perfect number is a positive integer number which is equals to the sum of its proper positive divisors. For example 6 is a perfect number because its proper divisors are 1, 2, 3 and it’s sum is equals to 6.]


#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        printf("%d is a perfect number", n);

    }else{
        printf("%d is not a perfect number", n);
    }
    return 0;
}