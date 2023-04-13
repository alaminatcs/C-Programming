/*
    Problem Name: Lowest Number
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int min=ar[0], pos=1;
    for(int i=1; i<n; i++)
    {
        if(min > ar[i])
        {
            min = ar[i];
            pos = i+1;
        }
    }
    printf("%d %d\n", min, pos);
    return 0;
}