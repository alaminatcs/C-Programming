/*
    Problem Name: Even or Odd
    Problem Link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/even-and-odd-8-1
*/
#include <stdio.h>
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int sume=0, sumo=0;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]%2)
            sumo += ar[i];
        else
            sume += ar[i];
    }
    printf("%d %d\n", sume, sumo);
    return 0;
}