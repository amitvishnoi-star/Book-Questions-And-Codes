/* Consider a currency system in which there are notes of six 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a 
sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. N. */
#include <stdio.h>
int main() {
    int N, count = 0;
    printf("Enter the amount in Rs.: ");
    scanf("%d", &N);

    // Calculate number of 100 Rs. notes
    count += N / 100;
    N = N % 100;

    // Calculate number of 50 Rs. notes
    count += N / 50;
    N = N % 50;

    // Calculate number of 10 Rs. notes
    count += N / 10;
    N = N % 10;

    // Calculate number of 5 Rs. notes
    count += N / 5;
    N = N % 5;

    // Calculate number of 2 Rs. notes
    count += N / 2;
    N = N % 2;

    // Calculate number of 1 Rs. notes
    count += N / 1;
    N = N % 1;

    printf("The smallest number of notes required: %d\n", count);
    return 0;
}