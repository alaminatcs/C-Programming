/*
Problem Name: Vowel counts in a string
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vowel_count(char *st, int i) {
    if(st[i] == '\0') return 0;
    else if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u') {
        return 1 +  vowel_count(st, i+1);
    }
    else if(st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U')
    {
        return 1 +  vowel_count(st, i+1);
    }
    else 0 + vowel_count(st, i+1);
}
int main() {
    char st[205];
    gets(st);
    printf("%d\n", vowel_count(st, 0));
    return 0;
}