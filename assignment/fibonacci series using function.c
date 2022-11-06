/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fibonacciSeries(int n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf(" %d", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int term;

   printf("Enter the term: ");
   scanf("%d",&term);

   printf("The fibonacci series is:\n");

   fibonacciSeries(term);

   return 0;
}
