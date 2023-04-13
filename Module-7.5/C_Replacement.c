/*
    Problem Name: Replacement
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] < 0)
            ar[i] = 2;
        else if (ar[i] > 0)
            ar[i] = 1;
    }
    for (int i = 0; i < n - 1; i++)
        printf("%d ", ar[i]);
    printf("%d\n", ar[n - 1]);
    return 0;
}