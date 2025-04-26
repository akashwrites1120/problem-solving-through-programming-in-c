//Write a C Program to find power of a given number using recursion. The number and the power to be calculated is taken from test case.

#include<stdio.h>

long power(int num, int pow){
    if(pow){
        return (num * power(num, pow - 1));
    }
    return 1;
}

int main(){
    int num, pow;
    long result;

    scanf("%d", &num);
    scanf("%d", &pow);

    result= power(num, pow);

    printf("%d^%d is %d", num, pow, result);

    return 0;
}