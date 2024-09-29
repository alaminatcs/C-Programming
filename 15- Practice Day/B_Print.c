/*
    Problem Name: Print 1 to N numbers using function.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>

void print(int n) {
    for(int i=1; i<n; i++) {
        printf("%d ", i);
    }
    printf("%d\n", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}