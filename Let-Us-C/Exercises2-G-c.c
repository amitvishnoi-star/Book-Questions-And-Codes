/* Write a program to receive values of Latitude (L1, L2) and Longitude 
(G1, G2), in degrees, of two places on earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is:
D = 3963*cos-1(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G1-G2)) */
#include <stdio.h>
#include <math.h>
int main() {
    double L1, L2, G1, G2, D;
    double R = 3963.0 ; // Radius of the Earth in nautical miles

    printf("Enter Latitude and Longitude of first place (L1 G1) in degrees: ");
    scanf("%lf %lf", &L1, &G1);
    printf("Enter Latitude and Longitude of second place (L2 G2) in degrees: ");
    scanf("%lf %lf", &L2, &G2);

    // Convert degrees to radians
    L1 = L1 * (3.14159265 / 180.0);
    L2 = L2 * (3.14159265 / 180.0);
    G1 = G1 * (3.14159265 / 180.0);
    G2 = G2 * (3.14159265 / 180.0);

    // Calculate distance using the given formula
    D = R * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G1 - G2));

    printf("Distance between the two places: %lf nautical miles\n", D);
    return 0;
}