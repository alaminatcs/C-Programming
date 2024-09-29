/*
    Problem Name: string length, len is no. of char until NULL char
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100] = "Al Amin Hasan";
    int len = 0;
    for(int i=0; i<sizeof(ar); i++)
    {
        if(ar[i] == '\0')
            break;
        else
            len++;
    }
    printf("length of ar: %d\n", len);          //op: len 13
    printf("size of ar: %d\n", sizeof(ar));     //op: size 100 if not define 100 then size will be 14(13+Null)
    
    printf("using built in function len = %d\n", strlen(ar));
    return 0;
}