//C PROGRAM TO FIND STRING LENGTH 

#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    int len1 = 0,len2,i;
    char s[SIZE];

    printf("Enter a string\n");
    scanf("%s",s);

    i = 0;
    while(s[i] != '\0')             //without using string buit in function
    {
        len1++;
        i++;
    }

    len2 = strlen(s);               //using string buit in function

    printf("String length of %s without using string buit in function is %d\n",s,len1);
    printf("String length of %s with using string built in function is %d\n",s,len2);

    return 0;

}