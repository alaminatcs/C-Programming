/*
    Problem Name: Add two numbers using function.
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
*/
#include <stdio.h>
#include <string.h>

int sum(int x, int y) {
    int res = x + y;
    return res;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", sum(x, y));
    return 0;
}