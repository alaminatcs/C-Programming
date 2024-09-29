#include<stdio.h>
int main()
{
    int in;
    float fl;
    char ch;
    scanf("intgr %d %f flt char%c", &in, &fl, &ch);
    printf("integer value: %d\nfloat value: %.2f\ncharacter value: %c\n", in, fl, ch);
    return 0;
}
/*
    if anyone can say u that you need to take input- 2b
    and print output-2b
    u can take it 2 way:
        - 1st way to take an int and a char input. scanf("%d%c", var, ch)
        - 2nd way to take an int with the specific character ie: scanf("%da", var)
*/