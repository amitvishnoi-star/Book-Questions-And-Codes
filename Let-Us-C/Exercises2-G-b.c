/* Write a Program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r, theta)
Hint: r = sqrt(x^2 + y^2), theta = atan2(y, x) */
#include <stdio.h>
#include <math.h>
int main() {
    float x, y, r, theta;
    printf("Enter the Cartesian coordinates (x y): ");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan2(y, x); // theta in radians
    printf("Polar coordinates: r = %f, theta = %f radians\n", r, theta);
    return 0;
}