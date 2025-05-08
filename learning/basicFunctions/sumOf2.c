#include<stdio.h>
int add(int a, int b){
    return a+b;
}

int main(){
    int a;
    int b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    
    int sum = add(a,b);
    printf("Sum is: %d", sum);
    return 0;
}