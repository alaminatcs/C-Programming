/*
Problem Name:  Write a function named swap_it() which will receive addresses of two
                integer variables. That means you need to receive them as integer pointers in the
                function parameter. In the function you need to swap the values of each other, you
                know that you can access the values of them by using dereferencing. You don’t
                need to return anything. After the function calls print the values of those two
                variables in the main function and see if anything happens
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap_it(int *m, int *n) {
    int temp = *m;
    *m = *n;
    *n = temp;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    swap_it(&m, &n);
    printf("%d %d\n", m, n);
    return 0;
}