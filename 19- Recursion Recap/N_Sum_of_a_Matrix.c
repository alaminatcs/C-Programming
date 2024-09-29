/*
Problem Name: Sum of two Matrix
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print_sum(int (*arr)[105], int (*brr)[105], int r, int c)
{
    int sum = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c-1; j++) {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("%d\n", arr[i][c-1] + brr[i][c-1]);
    }
}
int main() {
    int r, c;
    scanf("%d %d\n", &r, &c);
    int arr[r][105], brr[r][105];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d ", &brr[i][j]);
        }
    }
    print_sum(arr, brr, r, c);
    return 0;
}