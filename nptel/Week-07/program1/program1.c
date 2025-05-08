//Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.

#include<stdio.h>
#include<ctype.h>

int main(){
    char str[1000];
    int upperCaseCount = 0, lowerCaseCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] !='\0'; i++){
        if(isupper(str[i])){
            upperCaseCount++;
        }else if(islower(str[i])){
            lowerCaseCount++;
        }
    }
    printf("Number of Uppercase Letters: %d\n", upperCaseCount);
    printf("Number of Losercase Letters: %d\n", lowerCaseCount);
    return 0;
}