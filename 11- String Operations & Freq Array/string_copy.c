/*
    Problem Name: string copy manullay and using built in function.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100], br[100];
    scanf("%s %s", ar, br);
    printf("before copy: %s %s\n", ar, br);
    for(int i=0; i<=strlen(br); i++)
        ar[i] = br[i];
    //strcpy(ar, br);         -built in function of copy
    printf("copy from 2nd to 1st: %s", ar);
    return 0;
}