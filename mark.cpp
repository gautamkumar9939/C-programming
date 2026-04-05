#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];
    int *ptr[5];
    printf("enter marks of 5 subjects:");
    
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    printf("total marks= %d\n",sum);
    printf("Average of marks= %.2f\n",(float)sum/5);
    return 0;
}