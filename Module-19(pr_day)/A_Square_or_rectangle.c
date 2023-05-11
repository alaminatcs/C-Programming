/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void solve() {
    int w, h;
    scanf("%d %d", &w, &h);
    if(w == h) printf("Square\n");
    else printf("Rectangle\n");
}

int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
    return 0;
}