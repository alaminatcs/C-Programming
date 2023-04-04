#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    for(int i=1; i<=no; i++)    //don't print just 5 from 1 to no
    {
        if(i == 5)
        {
            printf("skip this\n");
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
/*
    continue st- need condition to continue into loop,
    after meet the condition it's skip the lower part in it
    and immediately go to the upper part of loop but don't exit from loop like break st
*/
