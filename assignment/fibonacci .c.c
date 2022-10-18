/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()

{
    int a=0,b=1,c,n,i;
    printf("enter the number:");
    scanf("%d", &n);
    for(i=2; i<n; i++)
    {
        c= a+b;
        a= b;
        b= c;
        printf(" %d", c);
        
    }
    
}
