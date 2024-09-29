/*
    Problem Name: find max and min using function.
    Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
*/
#include <stdio.h>
#include <string.h>

void find(int *min, int *max, int *arr, int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < *min) {
            *min = arr[i];
        }
        if(arr[i] > *max) {
            *max = arr[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    find(&min, &max, arr, n);
    printf("%d %d\n", min, max);
    return 0;
}