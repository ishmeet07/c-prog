#include<stdlib.h>
#include<stdio.h>

FILE *ptr1,*ptr2;
    char empid[50],name[50],emp[20],position[50],fname[50],man[20];
    float pay, ex,shares, ex2;
    int n,age,age2,k;

    void employee()
    {    
    printf("Enter the filename you want to open for storing employee data\n");
	scanf("%s", &name);
    
    ptr1 = fopen(name, "w");
     printf("enter the no of employees in the company");
     scanf("%d",&n);
     for( int i=0;i<n;i++)
     {   printf("\nEnter the name of the employee %d : ",i+1);
        scanf("%s", &emp);
         printf("\nEnter the employee id : ");
        scanf("%s", &empid);
        printf("\nEnter the salary of the employee: ");
        scanf("%f",&pay);
        printf("\nEnter the age of the employee: ");
        scanf("%d",&age);
        printf("\nEnter the experience of the employee: ");
        scanf("%f",&ex);
        fprintf(ptr1, "%s %s %.2f %d %.2f \n", emp,empid,pay,age,ex);
     } 
     fclose(ptr1);}
     void manage()
{   system("CLS");
    printf("Enter the filename you want to open for storing manager data\n");
	scanf("%s", &fname);
    ptr2 = fopen(fname, "w");
     printf("enter the no of manager in the company ");
     scanf("%d",&k);
     for( int i=0;i<k;i++)
     {   printf("\nEnter the name of the manager %d: ",i+1);
        scanf("%s", &man);
         printf("\nEnter the post of the manager: ");
        scanf("%s", &position);
        printf("\nEnter the percentage share of the company held by the manager: ");
        scanf("%f",&shares);
        printf("\nEnter the age of the manager: ");
        scanf("%d",&age2);
        printf("\nEnter the experience of the manager: ");
        scanf("%f",&ex2);
        fprintf(ptr2, "%s %s %.2f %d %.2f \n", man,position,shares,age2,ex2);
     } 
     fclose(ptr2);
      }
         void main()
{
    
    manage();
    employee();
    system("CLS");
    printf("\t WELCOME TO ISHMEET'S DATABASE\n\n");
    printf("\t MANAGER DATA\n\n");
     ptr2 = fopen(fname, "r");
	printf("\nname\t\t position\tshares percentage\tage\texperience\n\n");
	for( int i = 0; i < k; i++)
    {
    	fscanf(ptr2, "%s %s %f %d %f\n", &man,&position,&shares,&age2,&ex2);
    	printf( "%s\t\t %s\t\t %.2f\t\t\t%d\t %.2f \n", man,position,shares,age2,ex2);
    }
    fclose(ptr2); 
    printf("\t EMPLOYEE DATA\n\n");
	ptr1 = fopen(name, "r");
	printf("\nname\t\t employee id  \tsalary\t\t\tage\t\texperience\n\n");
	for(int i = 0; i < n; i++)
    {
    	fscanf(ptr1,"%s %s %f %d %f\n", &emp,&empid,&pay,&age,&ex);
    	printf("%s\t\t %s\t\t %.2f\t\t %d\t\t %.2f \n", emp,empid,pay,age,ex);
    }
    fclose(ptr1);

  }
