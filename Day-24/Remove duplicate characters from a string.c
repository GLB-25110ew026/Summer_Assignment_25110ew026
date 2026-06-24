//WAP to remove duplicate characters from a string.
#include <stdio.h>
int main() 
{
    int i,j,desired_index=0,duplicate;
    char str[200];
    printf("Enter the string: ");
    scanf("%s",str); 
    for(i=0;str[i]!='\0';i++) 
    {
        duplicate=0;
        for(j=0;j<i;j++) 
        {
            if(str[i]==str[j]) 
            {
                duplicate=1; 
                break;
            }
        }
        if(duplicate==0) 
        {
            str[desired_index]=str[i];
            desired_index++;
        }
    }
    str[desired_index]='\0';
    printf("The final string : %s",str);
    return 0;
}