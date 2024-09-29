/*
    Problem Name: Create New string.
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1005], t[1005];
    gets(s);
    gets(t);
    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s %s\n", s, t);
    return 0;
}