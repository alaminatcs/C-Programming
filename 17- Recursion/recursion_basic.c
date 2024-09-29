/*
Problem Name: recursion basic
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun() {           //here we need to terminating point(base case) otherwise it goes to infinity
    printf("Fun\n");
    fun();
}
int main() {
    fun();
    return 0;
}