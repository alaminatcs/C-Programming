/*
    Problem Details: In C programming char array is called string.
    here we find scan char array from console
*/
#include <stdio.h>
int main()
{
    int size;
    scanf("%d\n", &size);
    char ar[size];
    for(int i=0; i<size; i++)
    {
        scanf("%c", &ar[i]);
    }
    for(int i=0; i<size; i++)
    {
        printf("%c", ar[i]);
    }
    //printf("%s", ar);                 -print without using loop
    printf("\nSize of array: %d\n", sizeof(ar)/sizeof(char));
    return 0;
}