/*
    Problem Name: Inverse all of Array elements 
    Problem Link: Module-9
*/
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int ar[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar[i]);
    }
    int temp;
    for(int i=0, j=size-1; i<j; i++, j--)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
    for(int i=0; i<size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}