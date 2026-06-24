//WAP to check string rotation.
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,length_1=0,length_2=0,rotation=0,match;
    char str1[200],str2[200];
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    while(str1[length_1]!='\0')
    {
        length_1++;
    }
    while(str2[length_2]!='\0')
    {
        length_2++;
    } 
    if(length_1!=length_2)
    {
        printf("No string rotations.");
        return 0;
    }
    for(i=0;i<length_1;i++) 
    {
        match=1;
        for(j=0;j<length_1;j++) 
        {
            if(str1[(i+j)%length_1]!=str2[j]) 
            {
                match=0;
                break;
            }
        }
        if(match==1) 
        {
            rotation=1;
            break;
        }
    }
    if(rotation==1)
    {
        printf("Yes,they are string rotations.");
    } 
    else 
    {
        printf("No,they are not string rotations.");
    }
    return 0;
}