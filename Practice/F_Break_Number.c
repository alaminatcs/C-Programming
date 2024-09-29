/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count_fun(unsigned long long x) {
    int count = 0;
    while(1) {
        if((x/2)*2 == x) {
            count++;
            x /= 2;
        }
        else break;
    }
    return count;
}
int main() {
    int n, count = 0;
    scanf("%d", &n);
    while(n--) {
        unsigned long long x;
        scanf("%llu", &x);
        if(x%2 == 0) {
            int res = count_fun(x);
            if(res > count) count = res;
        }
    }
    printf("%d\n", count);
    return 0;
}