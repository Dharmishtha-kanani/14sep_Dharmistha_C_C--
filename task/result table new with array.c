#include<stdio.h>
int main()
{
char name[20];
float marks[20];
int roll[20];
float perc;
int no;
int result;
printf("howmany students data enter:\n");
scanf("%d",&no);
int i;
for(i=0;i<no;i++)
   {
    printf("enter students %d info\n",i+1);
    printf("name");
    scanf("%s",&name[i]);
    printf("roll number");
    scanf("%d",&roll[i]);
    printf("enter  marks");
    scanf("%f",&marks[i]);
    perc=marks[i]*100\300;
    printf("enter percentage");
    } 
    if(perc>=35)
    {
        printf("passing");
        
    }
    else
    {
        printf("fail");
    }
   
   //display records
   printf("name\troll\tmarks\nperc\nresult\n");
   int j;
   for(j=0;j<no;j++)
   {
       printf("%s\t%d\t%f\n",name[j],roll[j],marks[j],perc,result);
   }
   return 0;
   
}