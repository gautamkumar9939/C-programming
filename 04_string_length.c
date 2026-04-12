#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100];
    int i=0,lenght;

    printf("\n enter the string:");
    gets(a);
    fflush(stdin);
    while(a[i]!='\0')
    {
        i++;
    }
    lenght=i;
    printf("\n length:%d",lenght);
    getch();
    }
