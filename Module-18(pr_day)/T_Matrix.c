/*
Problem Name: absolute difference between two diagonals
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int absolute_dif(int (*arr)[105], int n) {
    int pri_diag = 0;
    for(int i = 0; i < n; i++) {
        pri_diag += arr[i][i];
    }
    int sec_diag = 0;
    for(int i = 0, j = n-1; i < n; i++, j--) {
        sec_diag += arr[i][j];
    }
    if(pri_diag-sec_diag < 0) return (-1) * (pri_diag - sec_diag);
    return pri_diag - sec_diag;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][105];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    printf("%d\n", absolute_dif(arr, n));
    return 0;
}