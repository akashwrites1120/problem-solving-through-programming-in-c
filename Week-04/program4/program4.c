//Write a Program to find the sum of all even numbers from 1 to N where the value of N is taken as input. [For example when N is 10 then the sum is 2+4+6+8+10 = 30]

#include<stdio.h>

int main(){
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d",&N);

    for(int i = 2; i<=N; i = i+2){
        sum = sum + i;
    }
    printf("sum of all even numbers from 1 to %d is %d",N, sum );
    return 0;
}