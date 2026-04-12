
SECTION A (DEBUGGING)

Q1 Corrected Program:
#include<stdio.h>
int main(){
    int n, a[100], i;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
    return 0;
}

Q2 Corrected Program:
#include<stdio.h>
int main(){
    int a[50], n, i;
    int max, min;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    max = a[0];
    min = a[0];
    for(i=1; i<n; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("Max=%d Min=%d", max, min);
    return 0;
}

Q3 Corrected Program:
#include<stdio.h>
int main(){
    char s1[40], s2[20];
    int i=0, j=0;
    printf("Enter string 1: "); scanf("%s", s1);
    printf("Enter string 2: "); scanf("%s", s2);
    while(s1[i] != '\0') i++;
    while(s2[j] != '\0'){
        s1[i] = s2[j];
        i++; j++;
    }
    s1[i] = '\0';
    printf("Concatenated: %s", s1);
    return 0;
}

Q4 Corrected Program:
#include<stdio.h>
int main(){
    char str[100];
    int i=0, vowels=0, spaces=0;
    printf("Enter string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowels++;
        if(str[i]==' ')
            spaces++;
    }
    printf("Vowels=%d Spaces=%d", vowels, spaces);
    return 0;
}

Q5 Corrected Program:
#include<stdio.h>
#include<string.h>
struct Date{
    int day, month, year;
};
struct Student{
    int rollno;
    char name[30];
    struct Date dob;
};
int main(){
    struct Student s;
    s.rollno = 12;
    strcpy(s.name, "Arun");
    s.dob.day=15; s.dob.month=8; s.dob.year=2003;
    printf("%d %s %d/%d/%d", s.rollno, s.name, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}

Q6 Corrected Program:
#include<stdio.h>
struct Employee{
    int empcode;
    char empname[30];
    float salary;
};
int main(){
    struct Employee e[3];
    int i;
    for(i=0; i<3; i++){
        scanf("%d", &e[i].empcode);
        scanf("%s", e[i].empname);
        scanf("%f", &e[i].salary);
    }
    for(i=0; i<3; i++)
        printf("%d %s %f\n", e[i].empcode, e[i].empname, e[i].salary);
    return 0;
}

Q7 Corrected Program:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i, sum=0;
    int *arr;
    printf("Enter n: "); scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum = %d", sum);
    free(arr);
    return 0;
}

Q8 Corrected Program:
#include<stdio.h>
#define PI 3.14
float area(float r){
    return PI * r * r;
}
int main(){
    float (*fptr)(float);
    float r, result;
    printf("Enter radius: ");
    scanf("%f", &r);
    fptr = area;
    result = fptr(r);
    printf("Area = %.2f", result);
    return 0;
}

Q9 Corrected Program:
#include<stdio.h>
int main(){
    FILE *src, *dest;
    char ch;
    src  = fopen("source.txt", "r");
    dest = fopen("dest.txt", "w");
    if(src==NULL || dest==NULL){
        printf("Error opening files");
        return 1;
    }
    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);
    return 0;
}

Q10 Corrected Program:
#include<stdio.h>
int main(){
    int a[50], n, i, j, minIdx, temp;
    printf("Enter n: "); scanf("%d",&n);
    for(i=0; i<n; i++) scanf("%d",&a[i]);
    for(i=0; i<n-1; i++){
        minIdx = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[minIdx])
                minIdx = j;
        }
        temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
    printf("Sorted: ");
    for(i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}

========================
SECTION B (PROGRAMS)
========================

Q1 Matrix Multiplication:
#include<stdio.h>
int main(){
    int a[3][3], b[3][3], c[3][3]={0}, i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                c[i][j]+=a[i][k]*b[k][j];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}

Q2 String Operations (no library):
#include<stdio.h>
int main(){
    char str[100], rev[100];
    int i,len=0;
    scanf("%s",str);
    while(str[len]!='\0') len++;
    for(i=0;i<len;i++)
        rev[i]=str[len-i-1];
    rev[i]='\0';
    printf("Length=%d\nReverse=%s\n",len,rev);
    if(strcmp(str,rev)==0) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}

Q3 Array Analysis:
#include<stdio.h>
int main(){
    int n,i,a[100],sum=0,pos=0,neg=0,even=0,odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]>0) pos++;
        else neg++;
        if(a[i]%2==0) even++;
        else odd++;
    }
    printf("Sum=%d Avg=%.2f\n",sum,(float)sum/n);
    return 0;
}

Q4 Structure Sort:
#include<stdio.h>
struct Student{
    int roll;
    char name[20];
    float score;
};
int main(){
    struct Student s[5], temp;
    int i,j;
    for(i=0;i<5;i++)
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].score);
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(s[i].score < s[j].score){
                temp=s[i]; s[i]=s[j]; s[j]=temp;
            }
    for(i=0;i<5;i++)
        printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].score);
    return 0;
}

Q5 Date Compare:
#include<stdio.h>
struct date{int d,m,y;};
int main(){
    struct date a,b;
    scanf("%d%d%d",&a.d,&a.m,&a.y);
    scanf("%d%d%d",&b.d,&b.m,&b.y);
    if(a.y<b.y || (a.y==b.y && a.m<b.m) || (a.y==b.y && a.m==b.m && a.d<b.d))
        printf("First earlier");
    else if(a.y==b.y && a.m==b.m && a.d==b.d)
        printf("Equal");
    else printf("Second earlier");
    return 0;
}

Q6 Prime Sum:
#include<stdio.h>
#include<stdlib.h>
int isPrime(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int n,i,sum=0,*a;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(isPrime(a[i])) sum+=a[i];
    }
    printf("Prime Sum=%d",sum);
    free(a);
    return 0;
}

Q7 String Sort:
#include<stdio.h>
#include<string.h>
int main(){
    char *s[5], temp[50];
    int i,j;
    for(i=0;i<5;i++){
        s[i]=(char*)malloc(50);
        scanf("%s",s[i]);
    }
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(strcmp(s[i],s[j])>0){
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
    for(i=0;i<5;i++)
        printf("%s\n",s[i]);
    return 0;
}

Q8 Binary File:
#include<stdio.h>
struct emp{int id; char name[20]; float sal;};
int main(){
    struct emp e, max;
    FILE *fp=fopen("emp.dat","wb+");
    int i;
    for(i=0;i<3;i++){
        scanf("%d %s %f",&e.id,e.name,&e.sal);
        fwrite(&e,sizeof(e),1,fp);
    }
    rewind(fp);
    fread(&max,sizeof(max),1,fp);
    while(fread(&e,sizeof(e),1,fp))
        if(e.sal>max.sal) max=e;
    printf("Highest: %s %.2f",max.name,max.sal);
    fclose(fp);
    return 0;
}

Q9 File Count:
#include<stdio.h>
int main(){
    FILE *fp=fopen("text.txt","r");
    char ch;
    int up=0,low=0,dig=0,vow=0,sym=0;
    while((ch=fgetc(fp))!=EOF){
        if(ch>='A'&&ch<='Z') up++;
        else if(ch>='a'&&ch<='z'){
            low++;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vow++;
        }
        else if(ch>='0'&&ch<='9') dig++;
        else sym++;
    }
    printf("Upper=%d Lower=%d Digits=%d Vowels=%d Symbols=%d",up,low,dig,vow,sym);
    fclose(fp);
    return 0;
}

Q10 Quick Sort:
#include<stdio.h>
void quick(int a[],int l,int h){
    int i=l,j=h,p=a[l],temp;
    if(l<h){
        while(i<j){
            while(a[i]<=p) i++;
            while(a[j]>p) j--;
            if(i<j){ temp=a[i]; a[i]=a[j]; a[j]=temp; }
        }
        temp=a[l]; a[l]=a[j]; a[j]=temp;
        quick(a,l,j-1);
        quick(a,j+1,h);
    }
}
int main(){
    int a[50],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}

