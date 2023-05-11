/*
Problem Name: Max from array
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max_num(int *arr, int i, int n) {
    if(i == n) return INT_MIN;
    int res = max_num(arr, i+1, n);
    if(arr[i] > res) return arr[i];
    else return res;
}
int main() {
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("%d\n", max_num(arr, 0, n));
    return 0;
}