/*
Problem Name: Print Digits using Recursion
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_digits(int n) {
    if(n == 0) return;
    print_digits(n/10);
    printf("%d ", n%10);
}

void solve() {
    int n;
    scanf("%d", &n);
    print_digits(n/10);
    printf("%d", n%10);
}

int main() {
    int t_c;
    scanf("%d", &t_c);
    while(t_c--) {
        solve();
        printf("\n");
    }
    return 0;
}