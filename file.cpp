#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char data[100];
    fp=fopen("myfile.txt","r");
    fgets(data,100,fp);
    printf("%s",data);
    fclose(fp);
    getch();
    
}