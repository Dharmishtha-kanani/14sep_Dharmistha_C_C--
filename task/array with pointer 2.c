#include<stdio.h>

#include<conio.h>
int main()
{
    int a[5],*ptr[5],i;
    
	
    printf("enter the value");
      for(i=0;i<5;i++)
       {
       scanf("%d",&a[i]);
       }
    
      
    
       for(i=0;i<5;i++)
    {
    	ptr[i]=&a[i];
    printf("\nvalue is:%d",*ptr[i]);
      *ptr[i]++;
}
    return 0;
}