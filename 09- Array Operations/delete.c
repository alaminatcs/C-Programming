/*
    Problem Name: Delete an Array element 
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
    int pos;
    scanf("%d", &pos);
    for(int i=pos-1; i<size-1; i++)
    {
        ar[i] = ar[i+1];
    }

    for(int i=0; i<size-1; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}