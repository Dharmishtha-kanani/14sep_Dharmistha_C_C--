#include<stdio.h>

int main()
{
    
    int arr[100], no, i, sum = 0;
    
    
    printf("Enter no\n");
    scanf("%d",&no);
    
    
    printf("Enter array elements\n");
    for(i=0; i<no;i++)
          scanf("%d",&arr[i]);
          
    
    for(i=0; i<no; i++)
          sum = sum + arr[i]; 
    
    
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}
