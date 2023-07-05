/*
    Problem Name: Shape2
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j < 2*i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}