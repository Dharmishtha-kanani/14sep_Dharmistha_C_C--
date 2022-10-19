/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int n;
    printf("enter row");
    scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    
    {
        printf(" ");
    }
     for(int k=1;k<n-i;k++)  
     {
         printf("*");
     }
     printf("\n");
}
}


