//WAP to compress a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    int length,i,count;
    char str[200];
    printf("Enter the string: ");
    scanf("%s",str);
    length=strlen(str);
    printf("The compressed string: ");
    for (i=0;i<length;i++) 
    {
        count=1;
        while(i<length-1 && str[i]==str[i+1]) 
        {
            count++;
            i++;
        }
        if(count>1)
        {
            printf("%c%d",str[i],count);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}