#include<stdio.h>
int main()
{
   int number,r,total=0,a;
   printf("enter the number=");
   scanf("%d",&number);
   a=number;
   while(number>0)
   {
      r=number%10;
      total=total+(r*r*r);
      number=number/10;
   }
   if(a==total)
      printf("This number is Armstrong number");
   else
      printf("This number is not Armstrong number");
   return 0;
}
