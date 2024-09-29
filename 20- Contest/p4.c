/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/count-it-2-2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1005];
    fgets(str, 1005, stdin);
    int small=0, capital=0, space=0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i]>='a' && str[i]<='z') small++;
        else if(str[i]>='A' && str[i]<='Z') capital++;
        else if(str[i] == ' ') space++;
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
    return 0;
}
