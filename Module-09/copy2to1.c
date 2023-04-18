/*
    Problem Name: Copy 2 array into an array 
    Problem Link: Module-9
*/
#include <stdio.h>
int main()
{
    int size, size2;
    scanf("%d %d", &size, &size2);
    int ar[size], br[size2];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<size2; i++)
    {
        scanf("%d", &br[i]);
    }
    int size3 = size+size2;
    int cr[size3];
    for(int i=0; i<size; i++)
    {
        cr[i] = ar[i];
    }
    for(int i=size, j=0; j<size2; i++, j++)
    {
        cr[i] = br[j];
    }
    for(int i=0; i<size3; i++)
    {
        printf("%d ", cr[i]);
    }
    printf("\n");
    return 0;
}