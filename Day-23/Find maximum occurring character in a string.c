//WAP to find the maximum occurring character in a string.
#include <stdio.h>
int main()
{
    int i,count=0,frequency[256]={0};
    char str[200],ch;
    printf("Enter the string: ");
    scanf("%s",str);
    i=0;
    while(str[i]!='\0')
    {
        frequency[str[i]]++;
        i++;
    }
    for(i=0;i<256;i++)
    {
        if(frequency[i]>count)
        {
            count=frequency[i];
            ch=(char)i;
        }
    }
    printf("The maximum occurring character in the string is %c.",ch);
    return 0;
}    


