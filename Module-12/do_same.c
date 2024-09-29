/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/do-the-same
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<k; i++)
    {
        for(int i=1; i<n; i++)
            printf("%d ", i);
        printf("%d\n", n);
    }
    return 0;
}
