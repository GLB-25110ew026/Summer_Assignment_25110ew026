//WAP to find character frequency in a string.
#include <stdio.h>
int main()
{
    int i,count=0;
    char str[200],ch;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character whose frequency is to be found: ");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Frequency of '%c' in the string is %d.\n",ch,count);
    return 0;
}