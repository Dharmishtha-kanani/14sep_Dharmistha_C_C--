#include <stdio.h>
#include <conio.h>

int main()
{

	FILE *fp;
	
    int i,num;
	char stab[10];

//	printf("Enter the No : ");
//	scanf("%d",&num);

	printf("Enter the  no : ");
	scanf("%d",&num);
    // for ( i=1; i<10;i++)  
    // {  
    //     printf ("\n %d * %d = %d", num, i, (num*i));  
    // }  
	
	fp=fopen("xyz.txt","w");
//	fprintf(fp,"%d%d",num,num);
//	;

for ( i=1; i<=10;i++)  
     {
	 
     	fprintf (fp,"\n%d*%d=%d", num, i, (num*i));  
	 
}
	
fclose(fp);	
	fp=fopen("xyz.txt","r");
	for ( i=1; i<=10;i++)  
     {
	 
	fscanf(fp,"%s",&stab);
	printf("\n %s",stab);
	}
	fclose(fp);



	getch();
	
}

