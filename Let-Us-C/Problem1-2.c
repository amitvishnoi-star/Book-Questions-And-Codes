// The distance between two cities (in kilometers) is input through the 
// keyboard. Write a program to convert and print this distance in meters, 
// feet, inches and centimeters.
#include <stdio.h>
int main()
{
    float km, m, ft, inch, cm;
    printf("Enter distance between two cities in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;
    printf("Distance in meters: %.2f m\n", m);
    printf("Distance in centimeters: %.2f cm\n", cm);
    printf("Distance in inches: %.2f in\n", inch);
    printf("Distance in feet: %.2f ft\n", ft);
}