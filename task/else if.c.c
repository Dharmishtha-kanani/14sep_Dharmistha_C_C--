/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a<0)
    {
        printf("given number is negative");
    }
    else if( a == 0)
     {
         printf("given no is zero");
     } 
        
    
   else
   {
       printf("given no is positive");
       
   }
}
   
