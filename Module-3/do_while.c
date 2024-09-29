#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    int i=20;
    do                      //print 1 to no using do while loop
    {
        printf("%d\n", i);
        i++;
    }
    while(i<=no);
    return 0;
}
/*
    initialization;
    do
    {
        statements;
        inc/dec;
    }
    while(condition);

    do while: it's work atleast one time whether condition doesn't meet.
    
    here in code if we input no lees than i then it print just one time
    otherwise works normal as like for, while loop
*/
