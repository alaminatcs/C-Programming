#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    for(int i=1; i<=no; i++)    //for loop to prints 1 to no's with types(odd or even)
    {
        if(i%2 == 0)
        {
            printf("%d - even\n", i);
        }
        else
        {
            printf("%d - odd\n", i);
        }
    }
    return 0;
}
/*
    for loop with different works using conditional statements
*/
