// this program is used to copy a file to another made by ishmeet
#include<stdlib.h>
#include<stdio.h>
void main()
{
    FILE *ptr1,*ptr2;
    char a[50],name[50];
    printf("Enter the filename you want to open for reading \n");
	scanf("%s", &name);
    ptr1 = fopen(name, "r");
	if (ptr1 == NULL)
	{
		printf("file cannot be opened%s \n", name);
		exit(0);
	}
printf("Enter the filename you want to open for \n");
	scanf("%s", &name);

	
	ptr2 = fopen(name, "w");
	if (ptr2 == NULL)
	{
		printf("file cannot be opened %s \n", name);
		exit(0);
	}
    
 while ((fgets(a,50,ptr1 )!=NULL))
 {
		fputs(a,ptr2);
		
	}
    
    printf("\n successfully copied the content to %s", name);

	fclose(ptr1);
	fclose(ptr2);
	
}
