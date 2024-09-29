/*
    Problem Name: Fixed Password
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
*/
#include <stdio.h>
int main()
{
    int x;
    while((scanf("%d", &x)) != EOF)
    {
        if(x != 1999) printf("Wrong\n");
        else
        {
            printf("Correct\n");
            break;
        }
    }
    return 0;
}