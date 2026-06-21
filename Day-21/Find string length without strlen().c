//WAP to find string length without strlen().
#include <stdio.h>
int main()
{
    int length=0;
    char str[200];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    if(length>0 && str[length-1]=='\n')
    {
        length--;
    }
    printf("The length of the string is %d.\n",length);
    return 0;
}