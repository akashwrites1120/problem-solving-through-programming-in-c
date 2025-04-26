//Write a C Program to find Largest Element of an Integer Array.Here the number of elements in the array ‘n’ and the elements of the array is read from the test data.Use the printf statement given below to print the largest element. printf("Largest element = %d", largest);

#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for(int i = 0; i< n; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }
    printf("Largest element is: %d", largest);
    return 0;
}