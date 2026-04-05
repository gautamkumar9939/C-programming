#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n;
    char str[25],str2[25];
    
    printf("\n enter the string:");
    gets(str);
    printf("enter string 2:");
    gets(str2);
    if(strcmp(str,str2)==0)
    printf("\n both strings are equal");
    else
    printf("\n both strings are not equal");
    getch();

}