//WAP to count even and odd elements.
#include <stdio.h>
int main()
{
    int i,size,even_count=0,odd_count=0;
    printf("Enter the size of the array= ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements= ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Number of even elements=%d\n",even_count);
    printf("Number of odd elements=%d\n",odd_count);
    return 0;
}