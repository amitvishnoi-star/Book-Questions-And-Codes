/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half, parallel to its 
shorter sides. Thus, paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8. */
#include <stdio.h>
int main() {
    int length = 1189, breadth = 841;
    int length1, breadth1;
    int length2, breadth2;
    int length3, breadth3;
    int length4, breadth4;
    int length5, breadth5;
    int length6, breadth6;
    int length7, breadth7;
    int length8, breadth8;
    printf("Size A0: %d mm x %d mm\n", length, breadth);

    breadth1 = length / 2;
    length1 = breadth;
    printf("Size A1: %d mm x %d mm\n", length1, breadth1);
    
    breadth2 = length1 / 2;
    length2 = breadth1;
    printf("Size A2: %d mm x %d mm\n", length2, breadth2);

    breadth3 = length2 / 2;
    length3 = breadth2;
    printf("Size A3: %d mm x %d mm\n", length3, breadth3);

    breadth4 = length3 / 2;
    length4 = breadth3;
    printf("Size A4: %d mm x %d mm\n", length4, breadth4);

    breadth5 = length4 / 2;
    length5 = breadth4;
    printf("Size A5: %d mm x %d mm\n", length5, breadth5);

    breadth6 = length5 / 2;
    length6 = breadth5;
    printf("Size A6: %d mm x %d mm\n", length6, breadth6);

    breadth7 = length6 / 2;
    length7 = breadth6;
    printf("Size A7: %d mm x %d mm\n", length7, breadth7);

    breadth8 = length7 / 2;
    length8 = breadth7;
    printf("Size A8: %d mm x %d mm\n", length8, breadth8);
    return 0;

}