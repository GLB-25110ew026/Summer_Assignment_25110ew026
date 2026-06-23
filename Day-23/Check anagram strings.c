//WAP to check anagram strings.
#include <stdio.h>
int main()
{
    int i=0,a[256]={0};
    char str1[200],str2[200];
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("Enter string 2: ");
    scanf("%s",str2);
    while(str1[i]!='\0')
    {
        a[str1[i]]++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        a[str2[i]]--;
        i++;
    }
    for(i=0;i<256;i++)
    {
        if(a[i]!=0)
        {
            printf("The given strings are not anagram.");
            return 0;
        }
    }
    printf("The given strings are anagram.");
    return 0;
}    

    
    