#include<stdio.h>
int main()
{
    int no;
    scanf("%d", &no);
    int sum = 0;
    for(int i=1; i<=no; i+=1)    //for loop to prints sum of 1 to no
    {
        sum += i;
    }
    printf("sum is: %d\n", sum);
    return 0;
}
/*
    sum = 0 initializing indeed otherwise it contains a garbage to inside
*/
