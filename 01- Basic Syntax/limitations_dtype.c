#include<stdio.h>
int main()
{
    int a = 1234567890;
    long long int b = 1234567890123456789;
    printf("%d\n%lld\n", a, b);
    float f = 12.453411;
    double d = 12.3456789123;
    printf("%f\n%.10lf\n", f, d);
    return 0;
}
/*
    int can take upto min of 10^9
    long long int can take upto min of 10^18
    float can take upto 7/8 digits
    double can take upto 15/16 digits --precise
*/