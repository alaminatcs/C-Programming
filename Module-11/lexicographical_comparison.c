/*
    Problem Name: Lexicographical Comparison.
    Problem Link:
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100], br[100];
    scanf("%s %s", ar, br);
    if(strlen(ar) < strlen(br))
        printf("1st < 2nd string\n");
    else if(strlen(ar) > strlen(br))
        printf("1st > 2nd string\n");
    else
    {
        int rem = 1;
        for(int i=0; i<strlen(ar); i++)
        {
            if(ar[i] < br[i])
            {
                printf("1st < 2nd string\n");
                rem = 0;
                break;
            }
            else if(ar[i] > br[i])
            {
                printf("1st > 2nd string\n");
                rem = 0;
                break;
            }
        }
        if(rem)
            printf("1st == 2nd string\n");
    }
/*
    //built in compare function
    //- strcmp(1 st, 2 st) == (actual work: 1 st - 2 st) -> (op: 0, +0, -0)

    if(strcmp(ar, br) == 0)
        printf("1st == 2nd string\n");
    else if(strcmp(ar, br) > 0)
        printf("1st > 2nd string\n");
    else if(strcmp(ar, br) < 0)
        printf("1st < 2nd string\n");
*/
    return 0;
}