/*
Problem Name: Inverted array
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void invert(int (*arr)[105], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = m-1; j > 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("%d\n", arr[i][0]);
    }
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][105];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d ", &arr[i][j]);
        }
        scanf("\n");
    }
    invert(arr, n, m);
    return 0;
}