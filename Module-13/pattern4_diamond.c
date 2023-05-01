/*
    Problem Name: Diamond Shape using numbers.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n-1;
    k = 1;
    for(int i=1; i<2*n; i++) {
        for(int j=1; j<=s; j++) {
            printf("  ");
        }
        for(int j=1; j<=k; j++) {
            printf("%d ", j);
        }
        if(i < n) {
            s--;
            k += 2;
        }
        else {
            s++;
            k -= 2;
        }
        printf("\n");
    }
    return 0;
}