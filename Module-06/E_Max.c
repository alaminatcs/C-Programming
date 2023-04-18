/*
    Problem Name: Max
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/
#include <stdio.h>
int main()
{
    int n, x, max=0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &x);
        if(x > max) max=x;
    }
    printf("%d\n", max);
    return 0;
}