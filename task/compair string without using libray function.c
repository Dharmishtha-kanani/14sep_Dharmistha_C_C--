#include<stdio.h>
#include<conio.h>

int main()
{
   char str1[30], str2[30];
   int i,f=0;

 printf("enter the first string");
 gets(str1);
 printf("enter the second string");
 gets(str2);
 for(i=0;str1[i]!=NULL;i++)
 
 {
     if(str1[i]!=str2[i])
     {
     f==1;
     break;
     }
 }
 if(f==1)
 
{

    printf("string are  same");
}
 else
 {
 
    printf("string are not same");
}
    return 0;
}
    
