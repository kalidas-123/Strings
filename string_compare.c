//C PROGRAM TO COMPARE TWO STRINGS

#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    char s1[SIZE],s2[SIZE];
    int res;

    printf("Enter two strings\n");
    scanf("%s%s",s1,s2);

    res = strcmp(s1,s2);

    if(res == 0)
        printf("Both the strings are same\n");
    else
        printf("Both the strings are different\n");

    return 0;

}