/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/small-and-capital
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%s", s);
    int ca=0, sa=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            sa++;
        else if(s[i]>='A' && s[i]<='Z')
            ca++;
    }
    printf("%d %d\n", ca, sa);
    return 0;
}
