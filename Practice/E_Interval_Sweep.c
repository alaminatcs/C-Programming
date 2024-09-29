/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a || b) {
        if((a-b == 1) || (a-b == -1) || (a-b == 0)) printf("YES\n");
        else printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}