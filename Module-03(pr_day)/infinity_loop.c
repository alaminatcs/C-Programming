#include<stdio.h>
int main()
{
    for(int i=1; i>0; i++)
    {
        printf("infinity loop\n");
    }
    return 0;
}
/*
    after running an infinity loop Output file goes to bigger and bigger, in this
    situation we can use the below code to settings to the Code Runner thus it goes
    exit after 5 second and print "Time Limit Exit"

    Go to Code Runner Extension
        then go to it's extension settings
            the go to executor map json settings
                then replace for the C language code executable file details-

    "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt.exe && timeout 5s $dir$fileNameWithoutExt.exe < input.txt > output.txt || (echo -n > output.txt && echo 'Time Exit')",

*/