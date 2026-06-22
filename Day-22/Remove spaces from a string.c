//WAP to remove spaces from a string.
#include <stdio.h>
int main()
{
    int i,j=0;
    char str[200];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("The string after removing the spaces is %s\n",str);
    return 0;
}