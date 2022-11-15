#include<stdio.h>
#include<conio.h>
void main()
{
char name[20][100];
int maths[20],sci[20],eng[20],percentage[20];
int roll[20],total[20];
char result;
int no;
printf("howmany students data enter:\n");
scanf("%d",&no);
int i,j;
for(i=0;i<=no-1;i++)
   {
    printf("enter students %d info\n",i+1);
    printf("name=");
    scanf("%s",&name[i]);
    printf("roll number=");
    scanf("%d",&roll[i]);
    printf("enter  marks=");
    scanf("%d%d%d",&maths[i],&sci[i],&eng[i]);
    total[i]=maths[i]+sci[i]+eng[i];
    percentage[i]=total[i]*100/300;
   printf("percentage is %d\n",percentage[i]);
   
   if(percentage>=35)
   {
    //   printf("pass\n");
        result='p';
       printf("%c\n",result);
   }
   else
   {
    //   printf("fail\n");
        result='f';
     printf("%c\n",result);
   }
    
        
   }
   {
  //display records
   printf("name\troll\tmaths\tsci\teng\tpercentage\tresult\n");
   
   for(j=0;j<=no-1;j++)
  {
       printf("%s\t%d\t%d\t%d\t%d\t%d\t\t%c\n",name[j],roll[j],maths[j],sci[j],eng[j],percentage[j],result);
  }
   
}
}
