/*
    Problem Name: Shape1
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}