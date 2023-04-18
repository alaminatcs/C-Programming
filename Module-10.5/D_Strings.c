/*
    Problem Name: Strings
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n%s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    char r[21];
    int i;
    for(i=0; i<strlen(a); i++)
        r[i] = a[i];
    for(int j=0; j<strlen(b); i++, j++)
        r[i] = b[j];
    //r[i] = '\0';
    printf("%s\n", r);

    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    printf("%s %s\n", a, b);
    return 0;
}