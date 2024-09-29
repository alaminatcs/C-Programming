/*
    Problem Name: Even, Odd, Positive and Negative
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
*/
#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int ev=0, od=0, pos=0, neg=0;
    while(n--)
    {
        scanf("%d", &x);
        if(x%2) od++;
        else ev++;
        if(x<0) neg++;
        else if(x>0) pos++;
    }
    printf("Even: %d\n", ev);
    printf("Odd: %d\n", od);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}