/*
    Problem Name: Reverse and Even.
    Problem Link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/reverse-and-even
*/
#include <stdio.h>
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=n-1; i>0; i--)
    {
        if(i%2 == 0)
            printf("%d ", ar[i]);
    }
    printf("%d\n", ar[0]);
    return 0;
}