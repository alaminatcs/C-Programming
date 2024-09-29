/*
Problem Name:
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int len(char *str, int i) {                  // %s / gets()
    if(str[i] == '\0') return 0;
    //if(str[i] == '\n') return i;          //fgets()
    int l = len(str, i+1);
    return l + 1;
}
int main() {
    char str[10000];
    //scanf("%s", str);
    gets(str);
    //fgets(str, 1000, stdin);
    printf("str len is: %d\n", len(str, 0));
    return 0;
}