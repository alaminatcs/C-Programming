/*
Problem Name: Summation
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long print(int *arr, int n) {
    if(n == 0) return arr[0];
    long long res = arr[n] + print(arr, n-1);
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("%lld\n", print(arr, n-1));
    return 0;
}