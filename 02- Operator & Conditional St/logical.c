#include<stdio.h>
int main()
{
    printf("%d\n", 5&&2);
    printf("%d\n", 5||2);
    printf("%d\n", !5);
    return 0;
}
/*
    every number represent true except the 0.
    Only True && True represent True others False.
    Only False || False represent False others True.
    !True represent False, !False represent True.
*/