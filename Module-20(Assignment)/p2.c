/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/unit-matrix
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    int rem = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                if(arr[i][j] != 1) {
                    rem = 0;
                    break;
                }
            }
            else {
                if(arr[i][j] != 0) {
                    rem = 0;
                    break;
                }
            }
        }
        if(rem == 0) break;
    }
    if(rem) printf("YES\n");
    else printf("NO\n");
    return 0;
}
