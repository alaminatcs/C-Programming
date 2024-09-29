/*
Problem Name: 
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
*/
#include <stdio.h>
#include <string.h>
int main() {
    int n; scanf("%d\n", &n);

    int cnt[26] = {0};
    for(int i=0; i<n; i++) {
        char ch = getchar(); cnt[ch - 'a']++;
    }
    
    for(int i=0; i<26; i++) {
        while(cnt[i]--) putchar(i+'a');
    } putchar('\n');
    return 0;
}