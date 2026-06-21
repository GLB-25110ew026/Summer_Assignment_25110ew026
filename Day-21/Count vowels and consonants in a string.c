//WAP to count vowels and consonants in a string.
#include <stdio.h>
int main()
{
    int i,vowels=0,consonants=0;
    char str[100],ch;
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
        else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            consonants++;
        }
    }
    printf("Number of vowels in the string is %d.\n",vowels);
    printf("Number of consonants in the string is %d.\n",consonants);
    return 0;
}
