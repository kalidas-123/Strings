//C PROGRAMS TO CONCATENATE TWO STRINGS

#include<stdio.h>
#include<string.h>
#define SIZE 20
int main()
{
    char s1[SIZE],s2[SIZE],s3[SIZE],i,j;

    printf("Enter two strings\n");
    scanf("%s%s",s1,s2);

    i = 0;
    while(s1[i] != '\0')
    i++;

    j = 0;
    while (s2[j] != '\0')                   //without using string built in function
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    strcat(s3,s1);                          //using string buit in function
    

    printf("string after concatenation without using string built in function is %s\n",s1);
    printf("String after concatenation using string built in function is %s\n",s3);
    
    return 0;
}