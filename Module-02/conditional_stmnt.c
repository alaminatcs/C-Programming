#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("I'll eat Burger ");
        if(tk >= 150)               //nested if
        {
            printf("and Ice Cream.\n");
        }
    }
    else if(tk >= 50)
    {
        printf("I'll eat Ice Cream ");
        if(tk >= 70)                   //nested if-else
        {
            printf("and Chocolate.\n");
        }
        else
        {
            printf("and nothing else.\n");
        }
    }
    else if(tk >= 20)
    {
        printf("I'll eat only Chocolate.\n");
    }
    else
    {
        printf("I'll not eat anything.\n");
    }
    return 0;
}
/*
    for 1 condition- we use if
    for 2 condition- we use if-else
    for more than 2 condition- we use if-else if-else
    nested if-else means using if-else inside of another if-else
*/