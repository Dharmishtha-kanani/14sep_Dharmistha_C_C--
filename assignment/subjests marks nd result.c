/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()

{
int bio,maths,chem,phy,eng,sum,total=500;
float per;
printf("enter the bio marks:");
scanf("%d",&bio);
printf("enter the maths marks:");
scanf("%d",&maths);
printf("enter the chem marks:");
scanf("%d",&chem);
printf("enter the phy marks:");
scanf("%d",&phy);
printf("enter the eng marks:");
scanf("%d",&eng);
sum=bio+maths+chem+phy+eng;
printf("\ntotal marks is:%d",sum);
per=sum*100/500;
printf("\npercentage is :%f",per);

if(per>75)
{
    printf("\nclass is distiction");
}
    else if((per>60)&&(per<=75))
    {
        
    
    printf("\nfirst class");}
    else if((per>50)&&(per<=60))
    {
    printf("\nsecond class");
    }
    else if((per>35)&&(per<=50))
    {
    printf("\npass class");
    }
    else
    {
    printf("\nfail");
    }
    
}








    
