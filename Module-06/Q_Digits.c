/*
    Problem Name: Digits
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
*/
#include <stdio.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        while (1)
        {
            printf("%d", n % 10);
            n /= 10;
            if (n != 0)
                printf(" ");
            else
            {
                printf("\n");
                break;
            }
        }
    }
    return 0;
}