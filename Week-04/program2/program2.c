// The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only print Right-angle triangle do not print it as Scalene Triangle).

#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // First, check if a triangle is possible
    if (a < b + c && b < a + c && c < a + b) {
        
        // Now, check if it's a right-angled triangle first
        if ((a * a) == (b * b) + (c * c) ||
            (b * b) == (a * a) + (c * c) ||
            (c * c) == (a * a) + (b * b)) {
            printf("Right-angle Triangle");
        }
        // Check for Equilateral
        else if (a == b && b == c) {
            printf("Equilateral Triangle");
        }
        // Check for Isosceles
        else if (a == b || a == c || b == c) {
            printf("Isosceles Triangle");
        }
        // If none of the above, it's Scalene
        else {
            printf("Scalene Triangle");
        }
        
    } else {
        printf("This Triangle is NOT possible.");
    }

    return 0;
}
