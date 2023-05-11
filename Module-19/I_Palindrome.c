/*
Problem Name: Palindrome
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_pallindrome(char *st) {
    for(int i=0, j=strlen(st)-1; i < j; i++, j--) {
        if(st[i] != st[j]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char st[1005];
    scanf("%s", st);
    if(is_pallindrome(st)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}