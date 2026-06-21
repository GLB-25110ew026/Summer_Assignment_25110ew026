//WAP to convert lowercase string to uppercase.
#include <stdio.h>
int main()
{
    int i;
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("The uppercase string is : %s\n",str);
    return 0;
}