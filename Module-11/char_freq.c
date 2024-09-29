/*
    Problem Name: a-z frequency count in an array
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100];
    scanf("%s", ar);
    int count[26]={0};
    for(int i=0; i<strlen(ar); i++)
        count[ar[i] - 'a']++;
    for(int i=0; i<26; i++)
    {
        printf("%c - %d times\n", i+'a', count[i]);
    }
    return 0;
}