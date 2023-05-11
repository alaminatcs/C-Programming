/*
Problem Name: Print Recursion
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(int n) {
    if(n == 0) return;
    print(n-1);
    printf("I love Recursion\n");
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}