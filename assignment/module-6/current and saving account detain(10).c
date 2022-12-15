   
   #include<stdio.h>
   void main()
   {
   
   
    int  i, total = 0;

    printf("The first 10 natural number is :\n");
 
    for (i = 1; i <= 10; i++)
    {
        total = total + i;
        printf("%d ",i);    
    }
    printf("\nThe Sum is : %d\n", total);
}
