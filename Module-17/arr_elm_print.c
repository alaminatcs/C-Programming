/*
Problem Name: array elements print in forward/reverse
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun(int *arr, int n, int i) {
    if(i == n) return;
    //printf("%d ", arr[i]);        //forward
    fun(arr, n, i + 1);
    printf("%d ", arr[i]);          //reverse
}
int main() {
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    fun(arr, n, 0);
    return 0;
}