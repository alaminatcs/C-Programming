/*
    Problem Name: takes string input with space
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    scanf("%s ", &a);         //%s normally takes string until space char
    printf("%s\n", a);

    char ar[25];            //we takes size = (no of char)+1; xtra 1 takes NULL char
    gets(ar);               //otherwise it happens segmentation faults
    printf("%s\n", ar);     //gets() can't takes newline

    char br[25];
    fgets(br, 20, stdin);    //fgets(ar_name, size, stdin) 
    printf("%s\n%d", br, strlen(br));     //here size = how many char want to takes + 1(NULL)
    return 0;               //fgets() can takes newline
}