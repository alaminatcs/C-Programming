/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i < (n+1)/2) {
            for(int j = 1; j <= n; j++) {
                if(j == i) printf("\\");
                else if(j == n+1-i) printf("/");
                else printf("*");
            }
        }
        else if(i == (n+1)/2) {
            for(int j = 1; j <= n; j++) {
                if(j == i) printf("X");
                else printf("*");
            }
        }
        else {
            for(int j = 1; j <= n; j++) {
                if(j == n+1-i) printf("/");
                else if(j == i) printf("\\");
                else printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}