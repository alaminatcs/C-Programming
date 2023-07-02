/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/middle-man-1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort_arr(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i]; arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    sort_arr(arr, n);
    if(n%2) printf("%d\n", arr[((n+1)/2)-1]);
    else {
        printf("%d %d\n", arr[(n/2)-1], arr[n/2]);
    }
    return 0;
}
