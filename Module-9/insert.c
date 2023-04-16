/*
    Problem Name: Array new element insert
    Problem Link: Module-9
*/
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int ar[size+1];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);
    for(int i=size; i>=pos; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[pos-1] = val;
    for(int i=0; i<=size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}