/*
    Problem Name:
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]) {
    for(int i=0, j=strlen(s)-1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[10000];
    scanf("%s", s);
    if(is_palindrome(s)) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}