/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int x, p;
    scanf("%d %d", &x, &p);
    printf("%.2f\n", p*100.0/(100-x));
    return 0;
}