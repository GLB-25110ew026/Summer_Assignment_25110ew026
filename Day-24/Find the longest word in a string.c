//WAP to find the longest word in a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    int i,current_length=0,maximum_length=0;
    char str[200],longest_word[100],current_word[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for(i=0;i<=strlen(str);i++) 
    {
        if(str[i]==' '||str[i]=='\0') 
        {
            current_word[current_length]='\0'; 
            if(current_length>maximum_length) 
            {
                maximum_length=current_length;
                strcpy(longest_word,current_word); 
            }
            current_length=0; 
        } 
        else 
        {
            current_word[current_length]=str[i];
            current_length++;
        }
    }
    if(maximum_length>0) 
    {
        printf("The longest word in the string is : %s",longest_word);
    } 
    else 
    {
        printf("No longest word found in the string.");
    }
    return 0;
}