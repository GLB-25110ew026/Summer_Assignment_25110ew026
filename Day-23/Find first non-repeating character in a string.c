//WAP to find the first non-repeating character in a string.
#include <stdio.h>
int main()
{
    int i,count[256]={0};
    char str[200];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        count[str[i]]++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(count[str[i]]==1)
        {
            printf("The first non-repeating character in the string is %c.",str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found in the string.");
    return 0;
}    
    