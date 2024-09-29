/*
    Problem Name: Function with return type but no parameter.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int do_sum() {
    int x, y;
    scanf("%d %d", &x, &y);
    int res = x + y;
    return res;
}
int main() {
    printf("summation is: %d", do_sum());
    return 0;
}