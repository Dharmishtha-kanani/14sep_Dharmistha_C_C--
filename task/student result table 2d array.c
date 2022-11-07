# include<stdio.h>
void main()
{
char name[20][100];
float marks[20];
int roll[20];

int no;
printf("howmany students data enter:\n");
scanf("%d",&no);
int i;
for(i=0;i<=no-1;i++)
   {
    printf("enter students %d info\n",i+1);
    printf("name");
    scanf("%s",&name[i]);
    printf("roll number");
    scanf("%d",&roll[i]);
    printf("enter  marks");
    scanf("%f",&marks[i]);
    
    } 
   
   //display records
   printf("name\troll\tmarks\n");
   int j;
   for(j=0;j<=no-1;j++)
   {
       printf("%s\t%d\t%f\n",name[j],roll[j],marks[j]);
   }
   
}


