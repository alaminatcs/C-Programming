/*
    Problem Name: Palindrome
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int rem = 1;
    for(int i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        if(s[i] != s[j])
        {
            rem = 0;
            break;
        }
    }
    if(rem)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}