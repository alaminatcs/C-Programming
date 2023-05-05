/*
Problem Name:  Make a function named change_it() which receives an array of integers
                and the size of that integer. In the function you need to change the value of the last
                index of that array and assign 100 there. You don’t need to return anything. After
                that print the array in the main function and see if it is updated.
Problem Link:
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void change_it(int *arr, int n) {
    arr[n-1] = 100;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    change_it(arr, n);
    for(int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[n-1]);
    return 0;
}