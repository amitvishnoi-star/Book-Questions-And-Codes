/* Wind-Chill Factor is the felt air temperature on exposed skin due to 
wind. The wind-chill temperature is always lower than the air 
temperature, and is calculated as per following formula: 
WCF = 35.74 + 0.6215*T - 35.75*(V^0.16) + 0.4275*T*(V^0.16)
where T is the air temperature and V is wind velocity. Write a program to
receive values of T and V and calculate wind-chill factor (WCF). */
#include <stdio.h>
#include <math.h>
int main() {
    double T, V, WCF;
    printf("Enter air temperature (T) in Fahrenheit: ");
    scanf("%lf", &T);
    printf("Enter wind velocity (V) in miles per hour: ");
    scanf("%lf", &V);
    WCF = 35.74 + 0.6215*T - 35.75*pow(V, 0.16) + 0.4275*T*pow(V, 0.16);
    printf("Wind-Chill Factor (WCF): %lf\n", WCF);
    return 0;
}