/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-2-1-1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ar[1000];
    scanf("%s", ar);
    int count = 0;
    for(int i=0; i<strlen(ar); i++)
        if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u')
            count++;
    printf("%d\n", count);
    return 0;
}
