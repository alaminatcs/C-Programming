#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    for(int i=1; i<=no; i++)    //don't print after 5 times print
    {
        printf("%d\n", i);
        if(i == 5)
        {
            break;
        }
    }
    return 0;
}
/*
    break st- need condition to break into loop,
    after meet the condition it's exit from the immediately
*/
