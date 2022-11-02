/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    int arr[10],maximum;
    for(i=0;i<10;i++)
    {
    printf("enter the number:");
    scanf (" %d",&arr[i]);
    }
    
    for(i=0;i<10;i++){
    if(arr[0] < arr[i])
    {
       arr[0] = arr[i];
    }
    } 
     printf ("maximum number is:%d",arr[0]);
 
 
 return 0;
}
 
    
    
    
    
    
