/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x[10],i,j,*ptr,a,n;
    printf("enter the number:");
    scanf("%d",&n);
    ptr=x;
    printf("emter the element:\n");
    for(i=0;i<n;i++)
    scanf("%d",&*(ptr+i));
    for(i=0;i<n-1;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(*(ptr+j) < *(ptr+i))
        {
          a=*(ptr+i);
          *(ptr+i)=*(ptr+j);
          *(ptr+j)=a;
        } 
        
        
    }
    
}

       printf("sort array is :");
       for(i=0;i<n;i++)
       printf(" %d",*(ptr+i));
       
       return 0;

}


    
    

