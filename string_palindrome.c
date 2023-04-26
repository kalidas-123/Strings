//C PROGRAM TO CHECK WHETHER A GIVEN STRING IS PALINDROME OR NOT

#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    char s[SIZE];
    int i,j,len,flag = 0;

    printf("Enter a string\n");
    scanf("%s",s);

    len = strlen(s);

    i = 0;
    j = len - 1;

    while (j > 1)
    {
        if(s[i] != s[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag == 0)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
    
}