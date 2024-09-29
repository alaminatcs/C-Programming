/*
    Problem Name: String Concatenation, its built in function
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100], br[100];
    scanf("%s %s", ar, br);
    printf("before concate: %s %s\n", ar, br);
    for(int i=strlen(ar), j=0; j<=strlen(br); i++, j++)
        ar[i] = br[j];
    printf("after concate: %s %s\n", ar, br);
/*
    strcat(ar, br);
    printf("%s %s\n", ar, br);      //-built in function: strcat(st1, st2) ==(op: st1+st2, st2)
*/
    return 0;
}