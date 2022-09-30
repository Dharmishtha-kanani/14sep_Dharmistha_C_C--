
#include <stdio.h>
void main()

{
int principle,time,rate,SI;
printf("enter the principal:");
scanf("%d",&principle);
printf("\nenter the rate:");
scanf("%d",&rate);
printf("\nenter the time:");
scanf("%d",&time);
SI = (principle * time * rate) / 100;
printf("\nsimple intrest is:%d",SI);
scanf("%d",&SI);

}