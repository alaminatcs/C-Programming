/*
    Problem Name: Can You Do It?
    Problem Link: https://www.hackerrank.com/contests/assignment-02lab-a-introduction-to-c-programming-a-batch-03/challenges/can-you-do-it-2-2
*/
#include <stdio.h>
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    if(n <= 0)
    {
        for(int i=n; i<=1; i++)
        {
            if(i == 1)
                printf("%d\n", i);
            else
                printf("%d ", i);
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(i == n)
                printf("%d\n", i);
            else
                printf("%d ", i);
        }
    }
    return 0;
}