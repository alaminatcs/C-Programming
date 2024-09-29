#include<stdio.h>
int main()
{
    int in = 10;
    float fl = 10.05;
    char ch = 'c';

    printf("Integer variable value is: %d\n", in);
    printf("Float variable value is: %0.2f\n", fl);
    printf("Character variable value is: %c\n", ch);
    return 0;
}
/*
    for the purpose of float value print normally we used to %f
    but it shows 6 digit after decimal point in this case we use
    0.(no of digit we want) after format specifier(%). 
*/