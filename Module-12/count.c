/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-i/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int ec=0, oc=0, ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]%2)
            oc++;
        else
            ec++;
    }
    printf("%d %d\n", ec, oc);
    return 0;
}
