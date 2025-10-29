// Ramesh’s basic salary is input through the keyboard. His dearness 
// allowance is 40% of basic salary, and house rent allowance is 20% of 
// basic salary. Write a program to calculate his gross salary. 
#include <stdio.h>
int main() {
    float bp, da, hra, gs;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    gs = bp + da + hra;
    printf("Ramesh's gross salary is: %.2f\n", gs);
    return 0; 
}