/*
    Problem Name:
    Problem Link: https://www.hackerrank.com/contests/assignment-03lab-a-introduction-to-c-programming-a-batch-03/challenges/count-iii
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000];
    scanf("%s", s);
    int ar[26] = {0};
    for(int i=0; i<strlen(s); i++)
        ar[s[i]-'a']++;
    for(int i=0; i<26; i++)
        printf("%c - %d\n", 'a'+i, ar[i]);
    return 0;
}
