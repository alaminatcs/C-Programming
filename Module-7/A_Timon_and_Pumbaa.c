/*
    Problem Name: Timon and Pumbaa
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
*/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a-b >= 0) printf("%d\n", a-b);
    else printf("0\n");
    return 0;
}