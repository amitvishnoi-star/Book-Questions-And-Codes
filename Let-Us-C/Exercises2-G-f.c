/* Two Numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D. */
#include <stdio.h>
int main() {
    float C, D, temp;
    printf("Enter two numbers (C D): ");
    scanf("%f %f", &C, &D);
    // Interchanging the values using a temporary variable
    temp = C;
    C = D;
    D = temp;
    printf("After interchanging: C = %f, D = %f\n", C, D);
    return 0;
}