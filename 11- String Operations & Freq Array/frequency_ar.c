/*
    Problem Name: 0-9 no frequency count in an array
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int size;
    scanf("%d", &size);
    int ar[size], count[10]={0};
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar[i]);
        count[ar[i]]++;
    }
    for(int i=0; i<10; i++)
    {
        printf("%d - %d times\n", i, count[i]);
    }
    return 0;
}