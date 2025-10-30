/* If value of an angle is input through the keyboard, Write a program
to print all its Trigonometric Ratios. */
#include <stdio.h>
#include <math.h>
int main() {
    double angle, radians;
    double const x = M_PI;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    radians = angle * (x / 180.0);
    printf("Sine: %lf\n", sin(radians));
    printf("Cosine: %lf\n", cos(radians));
    printf("Tangent: %lf\n", tan(radians));
    printf("Cosecant: %lf\n", 1 / sin(radians));
    printf("Secant: %lf\n", 1 / cos(radians));
    printf("Cotangent: %lf\n", 1 / tan(radians));
    return 0;
}
// Here cotangent, secant and cosecant gives max value of double when angle is 0, 90, 180 etc.