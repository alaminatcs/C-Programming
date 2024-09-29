/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/who-wins-2-2
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, tiger=0, pathan=0;
    scanf("%d", &n);
    long long x1, x2;
    while(n--) {
        scanf("%lld %lld", &x1, &x2);
        if(x1 > x2) tiger++;
        else if(x1 < x2) pathan++;
    }
    if(tiger > pathan) printf("Tiger\n");
    else if(tiger < pathan) printf("Pathan\n");
    else printf("Draw\n");
    return 0;
}
