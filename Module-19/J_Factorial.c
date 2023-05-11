/*
Problem Name: Factorial
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long fact(int n) {
    if(n == 1) return 1;
    return n * fact(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", fact(n));
    return 0;
}