// Write a C program to check whether the given number(N) can be expressed as Power of Two (2) or not.For example 8 can be expressed as 2^3.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int temp = n;

    if (temp <= 0)
    {
        printf("%d cannot be expressed as a power of 2.\n", n);
    }
    else
    {
        while (temp % 2 == 0)
        {
            temp = temp / 2;
        }
    }
    if (temp == 1)
    {
        printf("Yes! %d can be expressed as a power of 2.\n", n);
    }
    else
    {
        printf("%d cannot be expressed as a power of 2.\n", n);
    }
    return 0;
}