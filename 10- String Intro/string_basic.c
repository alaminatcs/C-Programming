/*
    Problem Name: char array(string) print pros-cons using %s
*/
#include <stdio.h>
int main()
{
    char ar[] = {'A', 'l', 'a', 'm', 'i', 'n'};
    for(int i=0; i<sizeof(ar); i++)
    {
        printf("%c", ar[i]);
    }                                //output: Alamin
    printf("\n");
    printf("%s\n", ar);              //output: Alamin�#��  --when we used %s then it prints until not get NUL char
    printf("Size of ar: %d\n", sizeof(ar));

    char br[] = "Alamin";           //this dec and init autometically takes a null char at the last of str
    for(int i=0; i<sizeof(br); i++)
    {
        printf("%c", br[i]);
    }                               //output: Alamin'NUL'
    printf("\n");
    printf("%s\n", br);            //output: Alamin
    printf("Size of ar: %d", sizeof(br));
    return 0;
}