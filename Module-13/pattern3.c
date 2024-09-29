/*
    Problem Name: Isotherms Triangle shape using numbers.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\nReverse of the above shape\n\n");
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}