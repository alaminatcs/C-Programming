/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/find-it-2-5
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int x, count=0;
    scanf("%d", &x);
    for(int i=0; i<n; i++)
    {
        if(ar[i] == x)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
