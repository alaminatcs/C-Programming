/*
    Problem Name: Summation
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }
    printf("%lld\n", abs(sum));
    return 0;
}