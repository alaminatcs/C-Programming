/*
    Problem Name: Equilateral Triangles shape using stars
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    int k = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(int j=1; j<=k; j++) {
            printf("* ");
        }
        printf("\n");
        k += 2;
    }
    printf("\nreverse of the above pattern\n\n");
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=n-i; j++) {
            printf("  ");
        }
        for(int j=1; j<2*i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
