/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define llu unsigned long long
llu solve(llu a, llu r) {
    return r*(r+1)/2 - a*(a+1)/2;
}
int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        llu l, r;
        scanf("%llu %llu", &l, &r);
        if(l > r) {
            llu rem = l;
            l = r;
            r = rem; 
        }
        printf("%llu\n", solve(l-1, r));
    }
    return 0;
}