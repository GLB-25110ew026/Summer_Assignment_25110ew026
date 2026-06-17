//WAP to find intersection of arrays.
#include <stdio.h>
int main()
{
    int i,n1,n2,duplicate,intersection=0,k,j;
    printf("Enter the size of the first array= ");
    scanf("%d",&n1);
    int arr_1[n1];
    printf("Enter the %d elements : ",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr_1[i]);
    }
    printf("Enter the size of the second array= ");
    scanf("%d",&n2);
    int arr_2[n2];
    printf("Enter the %d elements : ",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr_2[i]);
    }
    printf("The intersection of the arrays : ");
    for(i=0;i<n1;i++)
    {
        duplicate=0;
        for(k=0;k<i;k++)
        {
            if(arr_1[i]==arr_1[k])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate==1)
        {
            continue;
        }
        for(j=0;j<n2;j++)
        {
            if(arr_1[i]==arr_2[j])
            {
                printf("%d ",arr_1[i]);
                intersection=1;
                break;
            }
        }
    }
    if(intersection==0)
    {
        printf("No intersection found.");
    }
    return 0;
}    
    