/*
Problem Name: First digit !
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int last;
    while(n)
    {
        last = n%10;
        n /= 10;
    }
    if(last%2)
    {
        printf("ODD\n");
    }
    else
    {
        printf("EVEN\n");
    }
    return 0;
}