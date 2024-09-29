/*
    Problem Name: Shape3
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 2*n; i++) {
        if(i <= n) {
            for(int j = 1; j <= n-i; j++) {
                printf(" ");
            }
            for(int j = 1; j < 2*i; j++) {
                printf("*");
            }
        }
        else {
            for(int j = 1; j < i-n; j++) {
                printf(" ");
            }
            for(int j = 1; j < 2*(2*n-i+1); j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}