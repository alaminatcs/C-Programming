/*
Problem Name: Print N to 1
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(int n, int i) {
    if(i > n) return;
    //if(n==1) printf("%d\n", n);
    //else printf("%d ", n);
    print(n, i+1);
    if(i==1) printf("%d\n", i);
    else printf("%d ", i);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n, 1);
    return 0;
}