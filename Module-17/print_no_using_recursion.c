/*
Problem Name: print 1 to 5/5 to 1 using recursion
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun(int i) {
    if(i == 6) return;         //base case
    printf("%d ", i);        //1 to 5
    fun(i + 1);
    //printf("%d\n", i);          //5 to 1
}
void fun2(int i) {
    if(i == 0) return;
    printf("%d ", i);           //5 to 1
    fun2(i - 1);
    //printf("%d ", i);         //1 to 5
}
int main() {
    fun(1);
    printf("\n");
    fun2(5);
    return 0;
}