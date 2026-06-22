//WAP to check if a string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    int i,length;
    char str[200],palindrome=1;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    length=strlen(str);
    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-i-1])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome==1)
    {
        printf("The given string is a palindrome string.");
    }
    else
    {
        printf("The given string is not a palindrome string.");
    }
    return 0;
}