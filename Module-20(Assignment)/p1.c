/*
Problem Name:
Problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-03/challenges/missing-number-31-1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void solve() {
    long long s, a, b, c;
    scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
    printf("%lld\n", s-(a+b+c));
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        solve();
    }
    return 0;
}
