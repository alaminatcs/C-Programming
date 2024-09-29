/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/wow-patterns-again
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        if(i%2) {
            for(int j = 1; j < 2*i; j++) {
                printf("^");
            }
        }
        else {
            for(int j = 1; j < 2*i; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
