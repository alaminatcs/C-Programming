/*
Problem Name: Capital or Small or Digit
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
*/
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        if(ch>='A' && ch<='Z')
        {
            printf("ALPHA\nIS CAPITAL\n");
        }
        else if(ch>='a' && ch<='z')
        {
            printf("ALPHA\nIS SMALL\n");
        }
    }
    return 0;
}