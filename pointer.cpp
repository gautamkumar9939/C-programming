#include<stdio.h>
#include<conio.h>
int main()
{
    char str[]="hello";
    char *pstr;
    pstr=str;
    printf("%s\n the string is:");
    while(*pstr !='\0')
    {
        printf("%c",*pstr);
        pstr++;
    }
        getch();

    
}