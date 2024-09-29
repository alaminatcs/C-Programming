/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort_ar(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    sort_ar(arr, n);
    int count = 0;
    for(int i = 1; i < n; i++) {
        for(int j = i-1; j >= 0; j--) {
            if(arr[i]-arr[j] == 1) count++;
            else break;
        }
    }
    printf("%d\n", count);
    return 0;
}