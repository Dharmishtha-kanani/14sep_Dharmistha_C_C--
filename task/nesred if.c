/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int age;
    printf("enter the age:");
    scanf("%d",& age);
    if(age<18)
    {
        printf("eligible for not working");
    }
    else
    {
        if(age>18)
        {
            printf("eligible for working");
        }   
        else
           {
               printf("eligible for not working");
           }
    
    }
}



 

