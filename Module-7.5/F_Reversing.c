/*
    Problem Name: Reversing
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    for(int i=n-1; i>0; i--)
        printf("%d ", ar[i]);
    printf("%d\n", ar[0]);
    return 0;
}