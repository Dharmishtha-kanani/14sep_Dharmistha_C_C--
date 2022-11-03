#include<stdio.h>
void main()
{
    int a,n,i,j,number[5];
    printf("enter the value of n:\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    
     printf("enter the number:");
     scanf("%d",&number[i]);
    }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
           {
               if(number[i]>number[j])
               {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
               }
               
           }
     }       
     
     printf("sort arry is given below:\n");
     for(i=0;i<n;i++)
     printf("%d\n",number[i]);
}
     
     
     
     
