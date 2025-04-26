//Write a C program to count total number of digits of an Integer number (N).

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int temp = n, count = 0;

    while(temp>0){
        count ++;
        temp = temp/10;
    }

    printf("The number %d contains %d digits.", n, count);
    return 0;
}