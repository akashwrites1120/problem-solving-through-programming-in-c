//Write a C Program to find HCF of 4 given numbers using recursive function

#include<stdio.h>
int hcf(int x,  int y){
    while(x != y){
        if(x>y){
            return hcf(x-y, y);
        }else{
            return hcf(x, y-x);
        }
    }
    return x;
}

int main(){
    int a,b,c,d, result;
    printf("Enter the four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = hcf(hcf(a,b), hcf(c,d));
    printf("The hcf is %d", result);
    return 0;
}