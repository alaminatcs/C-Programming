/*
    Problem Name: Even Numbers
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int rem = 1;
    for(int i=2; i<=n; i+=2)
    {
        printf("%d\n", i);
        rem = 0;
    }
    if(rem)
    {
        printf("-1\n");
    }
    return 0;
}