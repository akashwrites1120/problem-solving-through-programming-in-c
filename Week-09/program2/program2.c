// Write a C program to search a given element from a 1D array and display the position at which it is found by using linear search function. The index location starts from 1.

#include<stdio.h>

int linearSearch(int arr[], int n,int element ){
    for(int i = 0; i< n; i++){
        if(arr[i] == element){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int n, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", element);

    int position = linearSearch(arr, n, element);

    if(position != -1){
        printf("%d is present at position %d in the array", element, position);
    }else{
        printf("%d is not present in the array");
    }

    return 0;
}