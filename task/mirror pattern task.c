/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{

int i,j,n,k;
    printf("Enter the number of rows");  
    scanf("%d",&n);  

    int m=1;
    

    for(i=n;i>=1;i--)  
    {  
        for(j=1;j<=i-1;j++)  
        {  
          printf(" ");
        }  
        for(k=1;k<=m;k++) 
        
        printf("*");
        m++;
        printf("\n");
        
        } 
m=5;
        for(i=n;i<=i;i++)
        {
            for(j=m;j>=1;j--)
            {
                printf("  ");
                
            }
            for (k=1;k<=m;k++)
            {
                printf("*");
            }
                printf("\n");
                m--;
        }
      
}