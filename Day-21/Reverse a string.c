//WAP to reverse a string.
#include <stdio.h>
int main()
{
    int length=0,start,end;
    char str[200],temp;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0')
    {
        length++;
    }
    if(length>0 && str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }
    start=0;
    end=length-1;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("The reversed string is %s\n",str);
    return 0;
}