/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *a,*b,sum, x, y;
    printf("enter the two numbers:");
    scanf("%d%d",&x,&y);
    a= &x;
    b= &y;
     
    sum =*a + *b;
   printf("sum of two number is%d:",sum);
    return 0;
}
