/*
If the marks obtained by a student in five different subjects are input 
through the keyboard, write a program to find out the aggregate marks 
and percentage marks obtained by the student. Assume that the 
maximum marks that can be obtained by a student in each subject is 
100. 
*/
#include <stdio.h>
int main()
{
    int maths, physics, chemistry, biology, english;
    int aggregate;
    float percentage;
    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in Biology: ");
    scanf("%d", &biology);
    printf("Enter marks obtained in English: ");
    scanf("%d", &english);
    aggregate = maths + physics + chemistry + biology + english;
    percentage = (aggregate / 500.0) * 100;
    printf("Aggregate marks: %d\n", aggregate);
    printf("Percentage marks: %.f%%\n", percentage);
}