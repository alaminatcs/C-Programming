/*
Problem Name: Print even indices
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(int *arr, int i, int n) {
    if(i > n) return;
    //if(n%2 == 0) printf("%d ", arr[n]);
    print(arr, i+1, n);
    if(i%2 == 0) printf("%d ", arr[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    print(arr, 0, n-1);
    return 0;
}