/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n, ev = 0, od = 0;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d ", &arr[i]);
            if(arr[i]%2) od++;
            else ev++;
        }
        if(n%2) printf("-1\n");
        else printf("%d\n", abs(ev-od)/2);
    }
    return 0;
}