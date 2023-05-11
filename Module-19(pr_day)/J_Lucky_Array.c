/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort_arr(int *arr, int n) {
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
int find_min(int *arr, int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    //int min = find_min(arr, n);
    sort_arr(arr, n);
    int min = arr[0];
    int i = 0, count = 0;
    while(arr[i] == min) {
        count++;
        i++;
    }
    if(count%2) printf("Lucky\n");
    else printf("Unlucky\n");
    return 0;
}