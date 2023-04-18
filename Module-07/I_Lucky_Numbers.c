/*
    Problem Name: Lucky Numbers.
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ld = n%10;
    n /= 10;
    int fd = n%10;
    if(ld%fd==0 || fd%ld==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}