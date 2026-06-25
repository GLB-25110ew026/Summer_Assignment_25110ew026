//WAP to find common characters in strings.
#include <stdio.h>
#include <string.h>
int main() 
{
    int i,found=0;
    char str1[200],str2[200],list_1[256]={0},list_2[256]={0},ch;
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(i=0;str1[i]!='\0';i++) 
    {
        list_1[str1[i]]=1;
    }
    printf("The common characters in the strings:\n");
    for(i=0;str2[i]!='\0';i++) 
    {
        ch=str2[i];
        if(list_1[ch]==1 && list_2[ch]!=1) 
        {
            printf("%c ",ch);
            list_2[ch]=1;
            found=1;
        }
    }
    if(found!=1) 
    {
        printf("No common characters found in the strings.");
    }
    return 0;
}