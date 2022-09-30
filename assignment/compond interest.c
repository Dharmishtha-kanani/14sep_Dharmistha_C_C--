/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
void main()
{
    float principle,rate,time,CI;
    printf("enter the principle:");
    scanf("%f",&principle);
        printf("enter the rate:");
    scanf("%f",&rate);
        printf("enter the time:");
    scanf("%f",&time);
    CI = principle* (pow((1 + rate / 100), time));
    printf("compound interest is:%f",CI);



    
    
}
