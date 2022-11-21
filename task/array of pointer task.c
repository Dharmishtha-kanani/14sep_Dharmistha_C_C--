#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3]={10,20,30},*ptr,i;
    for(i=0;i<3;i++)
    {
    ptr=&a[i];
    }
    for(i=0;i<3;i++)
    {
    printf("\n%d",a[i]);
    
    
    }
    
    return 0;
}