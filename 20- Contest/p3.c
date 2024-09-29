/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/matrix-38
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    for(int i=n-1, j=0; j < m-1; j++) {
        printf("%d ", arr[i][j]);
    }
    printf("%d\n", arr[n-1][m-1]);
    for(int i=0, j=m-1; i < n-1; i++) {
        printf("%d ", arr[i][j]);
    }
    printf("%d\n", arr[n-1][m-1]);
    return 0;
}
