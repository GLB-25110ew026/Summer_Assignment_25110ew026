//WAP to sort names alphabetically.
#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,j;
    char names[30][30],temp[30];
    printf("Enter the number of names:\n");
    scanf("%d",&n);
    printf("Enter the %d names:\n",n);
    for(i=0;i<n;i++) 
    {
        printf("Name %d: ",i+1);
        scanf("%s",names[i]); 
    }
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++) 
        {
            if(strcmp(names[i],names[j])>0) 
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("The names in alphabetical order:\n");
    for(i=0;i<n;i++) 
    {
        printf("%s\n",names[i]);
    }
    return 0;
}