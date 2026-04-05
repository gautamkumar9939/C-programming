#include<stdio.h>
#include<conio.h>
int main()
{
    int var[]={100,200,300};
    int i, *ptr[3];
    
    for(i=0;i<3;i++)
    {
        ptr[i]=&var[i];
    }
    for(i=0;i<3;i++)
    {
        printf("values of var [%d]=%d\n",i,*ptr[i]);
    
    }
    getch();
}