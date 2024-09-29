/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort_arr(long long *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld ", &arr[i]);
    }
    sort_arr(arr, n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            sum += arr[i];
            k--;
        }
        if(k == 0) break;
    }
    printf("%lld\n", sum);
    return 0;
}