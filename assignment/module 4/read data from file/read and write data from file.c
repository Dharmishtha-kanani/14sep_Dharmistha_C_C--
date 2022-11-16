#include <stdio.h>
#include <conio.h>

void main()
{

	FILE *fp;
	char str[300],str1[300];
	int age,;
	

	printf("Enter the Name to write in File : ");
	scanf("%s",&str);

	printf("Enter the Age to write in file : ");
	scanf("%d",&age);

	//...Writing Data in file from Str...
	fp=fopen("xyz.txt","w");
	fprintf(fp,"%s%d",str,age);
	fclose(fp);


	//...Reading Data from file in Str
	fp=fopen("xyz.txt","r");
	fscanf(fp,"%s%d",str1,&age);
	printf("\n DATA in file is : %s %d",str1,age);
	fclose(fp);

	

	getch();
}