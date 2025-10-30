/* If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits. 
(Hint: Use the modulus operator %) */
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    digit = num % 10;
    sum += digit;
    num = num / 10;
    digit = num % 10;
    sum += digit;
    num = num / 10;
    digit = num % 10;
    sum += digit;
    num = num / 10;
    digit = num % 10;
    sum += digit;
    num = num / 10;
    digit = num % 10;
    sum += digit;
    printf("Sum of the digits: %d\n", sum);
    return 0;
}
// It Assumes that user will input a five-digit number.
// Its because till chapter 2 we have not learned loops yet.