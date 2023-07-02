/*
Problem Name:
Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
unsigned int bitwise_xor(int a, int b) {
    unsigned int i = 0, sum = 0;
    while(a || b) {
        if(a%2 != b%2) sum += pow(2, i);
        a /= 2;
        b /= 2;
        i++;
    }
    return sum;
}
int main() {
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u\n", bitwise_xor(a, b));
    return 0;
}