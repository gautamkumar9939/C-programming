Q1) Multiply two 3x3 matrices


int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    printf("Enter elements of Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = 0;
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (A x B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



 Q2) String length, reverse, palindrome (NO string functions)
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    
    while(str[len] != '\0') {
        len++;
    }

    printf("Length of string = %d\n", len);

    
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);

    
    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    return 0;
}

 
 Q3) Total, average, max, min, positive, negative, even, odd
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0, max, min;
    int pos = 0, neg = 0, even = 0, odd = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];

        if(arr[i] > 0) pos++;
        if(arr[i] < 0) neg++;

        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    avg = (float)sum / n;

    printf("\nTotal = %d", sum);
    printf("\nAverage = %.2f", avg);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
    printf("\nPositive count = %d", pos);
    printf("\nNegative count = %d", neg);
    printf("\nEven count = %d", even);
    printf("\nOdd count = %d\n", odd);

    return 0;
}

 
 Q4) Student structure, store 5 students, sort by score (descending)
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct Student s[5], temp;
    int i, j;

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Department: ");
        scanf("%s", s[i].department);

        printf("Year of Joining: ");
        scanf("%d", &s[i].year_of_joining);

        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nStudents sorted by score (Descending):\n");
    printf("RollNo\tName\tDepartment\tYear\tScore\n");

    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t%s\t\t%d\t%.2f\n",
               s[i].rollno, s[i].name, s[i].department,
               s[i].year_of_joining, s[i].score);
    }

    return 0;
}


Q5) Compare two dates using structure
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    if(d1.year < d2.year)
        printf("First date is earlier.\n");
    else if(d1.year > d2.year)
        printf("Second date is earlier.\n");
    else {
        if(d1.month < d2.month)
            printf("First date is earlier.\n");
        else if(d1.month > d2.month)
            printf("Second date is earlier.\n");
        else {
            if(d1.day < d2.day)
                printf("First date is earlier.\n");
            else if(d1.day > d2.day)
                printf("Second date is earlier.\n");
            else
                printf("Both dates are Equal.\n");
        }
    }

    return 0;
}

 
 Q6) Dynamic array using malloc, sum of prime numbers, free memory
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    int i;
    if(num <= 1)
        return 0;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i;
    int *arr;
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    free(arr);

    return 0;
}

Q7) Store 5 strings using array of pointers & sort using strcmp
#include <stdio.h>
#include <string.h>

int main() {
    char *str[5];
    char temp[50];
    int i, j;


    for(i = 0; i < 5; i++) {
        printf("Enter string %d: ", i + 1);
        gets(temp);

        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

  
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                char *t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }

    printf("\nStrings in Ascending Order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

Q8) Store employee records in binary file & display highest salary employee
#include <stdio.h>

struct Employee {
    int empcode;
    char empname[30];
    float salary;
};

int main() {
    struct Employee e, maxEmp;
    int n, i;
    FILE *fp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    fp = fopen("employee.dat", "wb");

    if(fp == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Emp Code: ");
        scanf("%d", &e.empcode);

        printf("Emp Name: ");
        scanf("%s", e.empname);

        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    
    fp = fopen("employee.dat", "rb");

    if(fp == NULL) {
        printf("File cannot be opened for reading!\n");
        return 1;
    }

    fread(&maxEmp, sizeof(maxEmp), 1, fp);

    while(fread(&e, sizeof(e), 1, fp)) {
        if(e.salary > maxEmp.salary) {
            maxEmp = e;
        }
    }

    fclose(fp);

    printf("\nEmployee with Highest Salary:\n");
    printf("Code: %d\n", maxEmp.empcode);
    printf("Name: %s\n", maxEmp.empname);
    printf("Salary: %.2f\n", maxEmp.salary);

    return 0;
}

Q9) Read text file & count uppercase, lowercase, digits, vowels, special symbols
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digit = 0, vowel = 0, special = 0;

    fp = fopen("input.txt", "r");

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {

        if(isupper(ch))
            upper++;

        else if(islower(ch))
            lower++;

        else if(isdigit(ch))
            digit++;

        else if(ch == ' ' || ch == '\n' || ch == '\t')
            continue;

        else
            special++;

        
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowel++;
    }

    fclose(fp);

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);
    printf("Digits = %d\n", digit);
    printf("Vowels = %d\n", vowel);
    printf("Special symbols = %d\n", special);

    return 0;
}


Q10) Quick Sort (recursive) for N integers (Before & After)
#include <stdio.h>

int partition(int arr[], int low, int high) 
{
    int pivot = arr[high];
    int i = low - 1, j, temp;

    for(j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("\n\nArray after sorting:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
