/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int ch;
    printf("1.enter the area of triangle\n2.enter the area of rectangle\n3.enter the area of circle\n ");
    scanf("%d",&ch);
    switch(ch){
            case 1:
            {
                int a,b,h,A;
                printf("enter side of triangle: ");
                scanf("%d%d",&b,&h);
                 A = 1/2 * b * h;
                 printf("area of triangle is%d:",A);
                 break;
                
            }
            case 2:
            {
                int area,lenth,width;
                printf("enter the side of rectangle:");
                scanf("%d%d",&lenth,&width);
                area=lenth*width;
                printf("area of rectangle is%d :",area);
                break;
            }
            
            case 3:
            {
            float pi=3.14,radius,area;
            printf("enter radius of circle:");
            scanf("%f",&radius);
            area=pi*radius*radius;
            printf("area of circle is%f:",area);
            break;
            }
            default:
            {
                  printf("enter the valid number");
                  break;
            }
            
               
    }      
 }
