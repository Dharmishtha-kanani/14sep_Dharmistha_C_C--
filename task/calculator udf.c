/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, 2.OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sab(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
    
}
int main()
{


    int a,n1,n2,c;
    printf("1.addition\n2.sabtraction\n3.multification\n4.division\n");
    scanf("%d",&a);
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("enter the second number:");
    scanf("%d",&n2);


if(a==1)
{
c=sum(n1,n2);
 printf (" Addition of %d and %d is: %d", n1, n2, c); 
}
else if(a==2)
{
c=sab(n1,n2);
 printf (" subtraction of %d and %d is: %d", n1, n2, c); 
}
else if(a==3)
{
c=multi(n1,n2);
 printf (" multification of %d and %d is: %d", n1, n2, c); 
}
else if(a==4)
{
c=divi(n1,n2);
printf (" division of %d and %d is: %d", n1, n2, c); 
}
}







