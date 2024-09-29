/*
Problem Name: call stack
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void world() {
    printf("World function start\n");
    printf("World function end\n");
}
void hello() {
    printf("Hello function start\n");
    world();
    printf("World function end\n");
}
int main() {
    printf("Main function start\n");
    hello();
    printf("Main function end\n");
    return 0;
}