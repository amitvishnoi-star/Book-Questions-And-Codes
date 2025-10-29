/* If lengths of three sides of a triangle are input through the keyboard, 
write a program to find the area of the triangle. */
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;  // Semi-perimeter
    area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
    printf("The area of the triangle is: %f\n", area);
    return 0;
}