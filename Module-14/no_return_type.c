/*
    Problem Name: Function with no return type but remains parameter.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
void do_sum(int a, int b) {
    int res = a + b;
    printf("summation is: %d\n", res);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    do_sum(x, y);
    return 0;
}