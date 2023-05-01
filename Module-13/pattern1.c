/*
    Problem Name: Isotherms Triangle shape using stars
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\nreverse of the above pattern\n\n");
    for(int i=1; i<=n; i++) {
        for(int j=n; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}