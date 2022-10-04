/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int a;
    printf("enter year is :");
    scanf("%d",&a);
    if(a%4==0){
        printf("leap year%d",a);
    }
    else{
        printf("not leap year%d",a);
    }


}
