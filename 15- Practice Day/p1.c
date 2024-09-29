/*
    Problem Name: Write a function named my_abs() that receives an integer value as
                parameter and returns the absolute value of that. Absolute value means if the value
                is negative it will be converted to positive value. Then print the value in the main
                function.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int my_abs(int n) {
    if(n < 0) {
        return n*(-1);
    }
    return n;
}
int main() {
    int n;
    scanf("%d", &n);
    n = my_abs(n);
    printf("%d\n", n);
    return 0;
}