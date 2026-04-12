#include <stdio.h>

int main()
{
    char name[50];
    int i;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Name in vertical form:\n");

    for(i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}