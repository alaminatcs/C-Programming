#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    for(int i=1; i<=no; i+=1)    //for loop to prints 1 to no
    {
        printf("%d\n", i);
    }
    return 0;
}
/*
    for different value print using loop need 3 requirements:
    i)   need starting value
    ii)  need ending value
    iii) need relation(pattern,...something else) between all values 
*/
