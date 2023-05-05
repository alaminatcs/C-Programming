/*
    Problem Name: Sort Numbers.
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
*/
#include <stdio.h>
#include <string.h>

void find(int x, int y, int z) {
    if(x >= y && x >= z) {
        if(y > z) {
            printf("%d\n%d\n%d\n", z, y, x);
        }
        else {
            printf("%d\n%d\n%d\n", y, z, x);
        }
    }
    else if(y >= x && y >= z) {
        if(x > z) {
            printf("%d\n%d\n%d\n", z, x, y);
        }
        else {
            printf("%d\n%d\n%d\n", x, z, y);
        }
    }
    else {
        if(x > y) {
            printf("%d\n%d\n%d\n", y, x, z);
        }
        else {
            printf("%d\n%d\n%d\n", x, y, z);
        }
    }
    printf("\n");
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    find(a, b, c);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}