/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/workers-1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    printf("%d\n", (m1*d)/m2);
    return 0;
}
