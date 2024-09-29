/*
    Problem Name: Searching
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int x, i, rem = 0;
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            rem = 1;
            break;
        }
    }
    if (rem)
        printf("%d\n", i);
    else
        printf("-1\n");
    return 0;
}