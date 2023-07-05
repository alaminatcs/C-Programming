/*
    Problem Name: Function with parameter and return type.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int do_sum(int a, int b) {
    int sum = a + b;
    return sum;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int res = do_sum(x, y);
    printf("summation is: %d", res);
    return 0;
}