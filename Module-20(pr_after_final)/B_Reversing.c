/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_before(int *arr, int j) {
    for(int i = 0; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) reverse_before(arr, i-1);
    }
    for(int i = 0; i < n-1; i++) printf("%d ", arr[i]);
    printf("%d\n", arr[n-1]);
    return 0;
}