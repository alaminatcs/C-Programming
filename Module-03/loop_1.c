#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    for(int i=1; i<=no; i=i+1)    //for loop to do same works no times
    {
        printf("hello\n");
    }
    return 0;
}
/*
    for(initialization; condition; increment/decrement)
    {
        //statement...
    }
    here in loop, initialization-just checek first time.
    but condition and inc/dec happens till the end of loop.

    ini-> cond -> 
                statement
    {
        inc/dec -> cond
                        statement
    } happens till the condition meets the requirements
    when doesn't meet condition it will exit from the loop. 
*/
