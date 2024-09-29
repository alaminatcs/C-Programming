/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n, k;
    scanf("%d %d\n", &n, &k); int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < n; i = i+k) {
        if(i+k < n) {
            int mn = arr[i];
            for(int j = i+1; j < i+k; j++) {
                if(arr[j] < mn) mn = arr[j];
            }
            printf("%d ", mn);
        }
        else {
            int mn = arr[i];
            for(int j = i+1; j < n; j++) {
                if(arr[j] < mn) mn = arr[j];
            }
            printf("%d\n", mn); break;
        }
    }
    return 0;
}