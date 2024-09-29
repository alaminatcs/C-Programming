/*
Problem Name: Search in Matrix
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_x_exist(int (*arr)[105], int n, int m, int x) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == x) return 1;
        }
    }
    return 0;
}

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);
    int arr[n][105];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    printf("%s\n", is_x_exist(arr, n, m, x) ? "will not take number" : "will take number");
    return 0;
}