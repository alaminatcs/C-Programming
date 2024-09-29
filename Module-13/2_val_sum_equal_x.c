/*
    Problem Name: Any of Two values sum equals to X in an array.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int rem = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i]+arr[j] == x) {
                rem = 1;
                break;
            }
        }
    }
    if(rem) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}