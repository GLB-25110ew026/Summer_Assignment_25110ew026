//WAP to sort words by length.
#include <stdio.h>
#include <string.h>
int main() 
{
    int n,i,j;
    char words[50][50],temp[50];
    printf("Enter the number of words: ");
    scanf("%d",&n);
    printf("Enter the %d words:\n",n);
    for(i=0;i<n;i++) 
    {
        scanf("%s",words[i]);
    }
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<n-i-1;j++) 
        {
            if(strlen(words[j])>strlen(words[j+1])) 
            {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("The words after sorting by length:\n");
    for(i=0;i<n;i++) 
    {
        printf("%s(length:%lu)\n",words[i],strlen(words[i]));
    }
    return 0;
}