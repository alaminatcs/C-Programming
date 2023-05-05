/*
Problem Name:  Write a function named count_odd() which receives an array of
                integers and the size of that array and counts the number of odd elements in that
                array and returns that. Call that function in the main function and print the count
                there.
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int count_odd(int *arr, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("%d\n", count_odd(arr, n));
    return 0;
}