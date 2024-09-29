/*
    Problem Name: Main Kabe Ko Daikhu Ga
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
*/
#include <stdio.h>
int main()
{
    long long e, m, b;
    scanf("%lld %lld %lld", &e, &m, &b);
    if (e<=m && e<=b)
        printf("%lld\n", e);
    else if (b<=e && b<=m)
        printf("%lld\n", b);
    else
    {
        e -= m;
        b -= m;
        if (e > b)
        {
            if (e/2 >= b)
                printf("%lld\n", m+b);
            else
                printf("%lld\n", m+e/2);
        }
        else
            printf("%lld\n", m+e/2);
    }
    return 0;
}