/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
struct object{
     char name[30];
     char address[30];
     int id,age;
};

int main()
{
    
      struct object n[5];
     printf("Enter %d Employee Details  \n",n);
      for(int i=0; i<5; i++)
      {
        // printf("Employee %d:- \n");
        printf("Name: ");
        scanf("%s",n[i].name);
        printf("Id: ");
        scanf("%d",&n[i].id);
        printf("adress:");
        scanf("%s",&n[i].address);
        printf("age: ");
        scanf("%d",&n[i].age);
        printf("\n");
}
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<5; i++)
    {
        
        printf("Name \t: ");
        printf("%s \n",n[i].name);
 
        printf("Id \t: ");
        printf("%d \n",n[i].id);
        
        printf("adress\t: ");
        printf("%s \n",n[i].address);
        
        printf("age \t: ");
        printf("%d \n",n[i].age);

        printf("\n");
    }
       return 0;


     
}

