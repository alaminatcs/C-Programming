/*
    Problem Name: Conversion
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == ',')
            s[i] = ' ';
        else if(s[i]>='a' && s[i]<='z')
            s[i] -= 32;
        else if(s[i]>='A' && s[i]<='Z')
            s[i] += 32;
    }
    printf("%s\n", s);
    return 0;
}