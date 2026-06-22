//WAP to count words in a sentence.
#include <stdio.h>
int main()
{
    int i,count=0,inside_word=0;
    char str[200];
    printf("Enter the sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(inside_word==0)
            {
                count++;
                inside_word=1;
            }
        }
        else
        {
            inside_word=0;
        }
    }
    printf("The number of words in the sentence is %d.",count);
    return 0;
}