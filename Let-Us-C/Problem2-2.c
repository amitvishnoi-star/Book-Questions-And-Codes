/* If a five-digit number is input through the keyboard, write a program to reverse the number. */
#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Reverse the number
   remainder = num % 10;
   reversedNum = reversedNum * 10 + remainder;
   num /= 10;
   remainder = num % 10;
   reversedNum = reversedNum * 10 + remainder;
   num /= 10;
   remainder = num % 10;
   reversedNum = reversedNum * 10 + remainder;
   num /= 10;
   remainder = num % 10;
   reversedNum = reversedNum * 10 + remainder;
   num /= 10;
   remainder = num % 10;
   reversedNum = reversedNum * 10 + remainder;
   printf("Reversed number: %d\n", reversedNum);
   return 0;
}
// This Code Doesnt verify if the number is five-digit or not.
// It assumes the user will input a valid five-digit number.