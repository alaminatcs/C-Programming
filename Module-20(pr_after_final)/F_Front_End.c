/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int i = 0, j = n-1;
    if(n%2) {
        for( ; i < j; i++, j--) {
            printf("%d %d ", arr[i], arr[j]);
        }
        printf("%d\n", arr[j]);
    }
    else {
        for(int i = 0; i < j; i++, j--) {
            printf("%d ", arr[i]);
            if(j-i == 1) printf("%d\n", arr[j]);
            else printf("%d ", arr[j]);
        }
    }
    return 0;
}