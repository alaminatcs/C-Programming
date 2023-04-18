/*
    Problem Name: Count
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000005];
    gets(ar);
    int sum = 0;
    for(int i=0; i<strlen(ar); i++)
    {
        if(ar[i] == '\0')
            break;
        else
            sum += ar[i]-'0';
    }
    printf("%d\n", sum);
    return 0;
}