//WAP to create menu-driven string operations system.
#include <stdio.h>
#include <string.h>
int main() 
{
    int choice;
    char str1[100],str2[100];
    while(1) 
    {
        printf("\n1. Length  2. Copy  3. Join  4. Compare  5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        if(choice==5) 
        {
            printf("Goodbye!\n");
            break;
        }
        switch(choice) 
        {
            case 1:
                printf("Enter string: ");
                scanf(" %[^\n]",str1);
                printf("Length: %d\n",(int)strlen(str1));
                break;
            case 2:
                printf("Enter string to copy: ");
                scanf(" %[^\n]",str1);
                strcpy(str2,str1);
                printf("Copied string: %s\n",str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]",str1);
                printf("Enter second string: ");
                scanf(" %[^\n]",str2);
                strcat(str1,str2);
                printf("Joined string: %s\n",str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]",str1);
                printf("Enter second string: ");
                scanf(" %[^\n]",str2);
                if(strcmp(str1,str2)==0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are different\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}