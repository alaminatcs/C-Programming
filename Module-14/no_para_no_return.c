/*
    Problem Name: Function with no parameter and no return type.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
void do_sum() {
    int x, y;
    scanf("%d %d", &x, &y);
    int res = x + y;
    printf("summation is: %d", res);
}
int main() {
    do_sum();
    return 0;
}