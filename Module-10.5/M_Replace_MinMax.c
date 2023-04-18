/*
    Problem Name: Replace MinMax
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
*/
#include <stdio.h>
int main()
{
    int n, min=100006, max=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] < min)
            min = ar[i];
        if(ar[i] > max)
            max = ar[i];
    }
    int rem=0, mxi, mni;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == min)
        {
            mni = i;
            rem++;
        }
        if(ar[i] ==  max)
        {
            mxi = i;
            rem++;
        }
        if(rem == 2)
            break;
    }
    ar[mni] = max;
    ar[mxi] = min;
    for(int i=0; i<n-1; i++)
        printf("%d ", ar[i]);
    printf("%d\n", ar[n-1]);
    return 0;
}