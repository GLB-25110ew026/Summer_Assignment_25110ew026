//WAP to find the first repeating character in a string.
#include <stdio.h>
int main()
{
    int i,count[256]={0};
    char str[200];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(count[str[i]]>0)
        {
            printf("The first repeating character in the string is %c.",str[i]);
            return 0;
        }
        count[str[i]]++;
    }
    printf("No repeating character found in the string.");
    return 0;
}    