/* The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle */
#include <stdio.h>
int main()
{
    float length, breadth, radius;
    float ar_rect, per_rect, ar_circle, circ_circle;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    ar_rect = length * breadth;
    per_rect = 2 * (length + breadth);
    ar_circle = 3.1416 * radius * radius;
    circ_circle = 2 * 3.1416 * radius;

    printf("Area of rectangle: %f\n", ar_rect);
    printf("Perimeter of rectangle: %f\n", per_rect);
    printf("Area of circle: %f\n", ar_circle);
    printf("Circumference of circle: %f\n", circ_circle);

}