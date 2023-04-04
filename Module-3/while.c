#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    int i=1;
    while(i<=no)    //print 1 to no using while loop
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
/*
    initialization;
    while(condition)
    {
        statements;
        inc/dec;
    }
*/
