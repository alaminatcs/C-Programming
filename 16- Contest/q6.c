/*
    Problem Name:
    Problem Link:
*/
#include <stdio.h>
#include <string.h>

//call by reference
void call_by_ref(int *a) {
    *a = 15;
}

//call by value
void call_by_val(int a) {
    a = 95;
}
int main()
{
    int x = 10;
    printf("value of x before passing: %d\n", x);
    call_by_ref(&x);
    printf("value of x after passing: %d\n\n", x);

    int y = 90;
    printf("value of y before passing: %d\n", y);
    call_by_val(y);
    printf("value of y after passing: %d\n", y);
    return 0;
}