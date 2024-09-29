/*
    Problem Statement:
    You need to take two integer values as input and show the summation,
    subtraction, multiplication and division in the given format below.
*/
#include<stdio.h>
int main()
{
    int no_1, no_2;
    scanf("%d %d", &no_1, &no_2);
    printf("%d + %d = %d\n", no_1, no_2, no_1+no_2);
    printf("%d - %d = %d\n", no_1, no_2, no_1-no_2);
    printf("%d * %d = %d\n", no_1, no_2, no_1*no_2);
    printf("%d / %d = %.2f\n", no_1, no_2, no_1*1.0/no_2);
    return 0;
}