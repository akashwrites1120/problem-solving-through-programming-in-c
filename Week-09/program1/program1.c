// Write a program to print all the locations at which a particular element (taken as input) is found in a list and also print the total number of times it occurs in the list. The location starts from 1.
// For example if there are 4 elements in the array
// 5
// 6
// 5
// 7
// If the element to search is 5 then the output will be
// 5 is present at location 1
// 5 is present at location 3
// 5 is present 2 times in the array.

#include<stdio.h>
int main(){
    int n, element, count = 0;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the list: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for(int i = 0; i<n; i++){
        if(arr[i] == element){
            printf("%d is present on location %d\n",element, i+1);
            count++;
        }
    }

    if(count>0){
        printf("%d is present %d times in the array.\n", element, count);
    }else{
        printf("%d is not persent in the array.\n", element);
    }
    return 0;
}