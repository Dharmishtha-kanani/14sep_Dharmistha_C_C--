/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<conio.h>

void strcopy (char x[],char y[])
{
    int i;
    for(i=0;y[i]!='\0';i++)
    x[i]=y[i];
    x[i]!='\0';
    
}
void main()
{
    char a[10],b[10];
    
    
    printf("enter the one string\n");
    scanf("%s",a);
    strcpy(b,a);
    printf("after copy string=%s",b);
    getch();
}


    