//WAP to find the common elements between the arrays.
#include <stdio.h>
int main()
{
    int i,j,n1,n2,k,common=0,already_checked;
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
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr_2[j]);
    }
    printf("The common elements are : ");
    for(i=0;i<n1;i++)
    {   
        already_checked=0;
        for(k=0;k<i;k++)
        {
            if(arr_1[i]==arr_1[k])
            {
                already_checked=1;
                break;
            }
        }
        if(already_checked==1)
        {
            continue;
        }    
        for(j=0;j<n2;j++)
        {
            if(arr_1[i]==arr_2[j])
            {   
                common=1;
                printf("%d ",arr_1[i]);
                break;
            }
        }
    }
    if(common==0)
    {
        printf("No common elements found.");
    }
    printf("\n");
    return 0;
}    
