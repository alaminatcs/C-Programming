/*
    Problem Name:
    Problem Link:
*/
#include <stdio.h>
#include <string.h>

//return type with parameter:
int return_with_para(int n) {
    int res = 0;
    for(int i = 0; i <= n; i += 2) {
        res += i;
    }
    return res;
}

//return type with no parameter:
int return_with_no_para(void) {
    int n;
    scanf("%d", &n);
    int res = 0;
    for(int i = 1; i <= n; i += 2) {
        res += i;
    }
    return res;
}

//no return type with parameter:
void no_return_with_para(int n) {
    int res = 1;
    for(int i = 2; i <= n; i += 2) {
        res *= i;
    }
    printf("Mul. of even no upto n: %d\n", res);
}

//no return type with no parameter:
void no_return_with_no_para(void) {
    int n;
    scanf("%d", &n);
    int res = 1;
    for(int i = 1; i <= n; i += 2) {
        res *= i;
    }
    printf("Mul. of odd no upto n: %d\n", res);
}

int main() {
    int n;
    scanf("%d", &n);

//return type with parameter:
    printf("Sum. of even no upto n: %d\n", return_with_para(n));

//return type with no parameter:
    printf("Sum. of odd no upto n: %d\n", return_with_no_para());
    
//no return type with parameter:
    no_return_with_para(n);

//no return type with no parameter:
    no_return_with_no_para();
    return 0;
}