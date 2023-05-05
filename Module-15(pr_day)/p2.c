/*
Problem Name: Write a function named my_len() which receives a string as a parameter
                and then counts the length of that string and returns that count. Don’t use strlen()
                function to get the length of the string. After receiving that count in the main
                function print it.
Note: The string will not have any spaces.

Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_len(char *st) {
    int i = 0, count = 0;
    while(st[i] != '\0') {
        count++;
        i++;
    }
    return count;
}
int main() {
    char st[1000];
    scanf("%s", st);
    int len = my_len(st);
    printf("%d\n", len);
    return 0;
}