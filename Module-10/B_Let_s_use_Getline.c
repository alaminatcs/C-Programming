/*
    Problem Name: Let's use getline
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000005];
    fgets(ar, 1000000, stdin);
    for(int i=0; i<strlen(ar); i++)
    {
        if(ar[i] == '\\')
            break;
        else
            printf("%c", ar[i]);
    }
    printf("\n");
    return 0;
}