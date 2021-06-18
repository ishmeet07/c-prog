#include<stdlib.h>
#include<stdio.h>
int a[10][10] ,b[10][10] ,r,c,d,k;
int input()
{                  system("CLS");
    

    printf("enter the no of rows and columns\n");
    scanf("%d%d",&r,&c);

          printf("enter the elements of 1st matrix\n");
          for(int i=0;i<r;i++)
          {        for(int j=0;j<c;j++)
                    scanf("%d",&a[i][j]);
          }
          printf(" the elements of 1st matrix are \n");
          for(int i=0;i<r;i++)
           {          for(int j=0;j<c;j++)
                       printf("%d\t",a[i][j]);
                       printf("\n");
           }
 
printf("enter the rows and columns of 2nd\n");
scanf("%d%d",&d,&k);
if((r==d)&&(c==k))
          {
            printf("enter the elements of 2nd matrix \n");
                    for(int i=0;i<d;i++)
                  {     for(int j=0;j<k;j++)
                        scanf("%d",&b[i][j]);
                  }
            printf(" the elements of 2nd matrix are \n");
                     for(int i=0;i<d;i++)
                  {      for(int j=0;j<k;j++)
                         printf("%d\t",b[i][j]);
                          printf("\n");
                  }
          }
 else 
 {printf("no of rows and columns should be equal");
 
 return 1;
}}
  int addition()
  { 

      int k=input();
        if (k==1)
        printf(" sorry");
        else  
    {   printf(" the  sum of elements of 1st and 2nd are\n");
          for(int i=0;i<r;i++)
 {        for(int j=0;j<c;j++)
            printf("%d\t",a[i][j]+b[i][j]);
              printf("\n");
 }
 return 0;
     }
  }	

 int sub()
 { 
 
 int k=input();
                if (k==1)
                      printf(" sorry");
                else
    {        printf(" the  difference of elements of 1st and 2nd are\n");
      for(int i=0;i<r;i++)
 {      for(int j=0;j<c;j++)
          printf("%d\t",a[i][j]-b[i][j]);
      printf("\n");
 }
 return 0;
    }
 }

void transpose()
{system("CLS");
    
    printf("enter the no of rows and columns\n");
    scanf("%d%d",&r,&c);

          printf("enter the elements of 1st matrix are\n");
          for(int i=0;i<r;i++)
          {        for(int j=0;j<c;j++)
                    scanf("%d",&a[i][j]);
          }
          printf(" the elements of 1st matrix are \n");
          for(int i=0;i<r;i++)
           {          for(int j=0;j<c;j++)
                       printf("%d\t",a[i][j]);
                       printf("\n");
           }
           printf(" the transpose of 1st matrix is \n");
          for(int i=0;i<r;i++)
           {          for(int j=0;j<c;j++)
                       printf("%d\t",a[j][i]);
                       printf("\n");
           }

}

void triangle()
{system("CLS");
    
  printf("enter the no of rows and columns\n");
    scanf("%d%d",&r,&c);

          printf("enter the elements of 1st matrix\n");
          for(int i=0;i<r;i++)
          {        for(int j=0;j<c;j++)
                    scanf("%d",&a[i][j]);
          }
          printf(" the elements of 1st matrix is \n");
          for(int i=0;i<r;i++)
           {          for(int j=0;j<c;j++)
                       printf("%d\t",a[i][j]);
                       printf("\n");}
           printf("the lower triangle is\n");
          for(int i=0;i<r;i++)
           {        {  for(int j=0;j<=i;j++)
                       printf("%d\t",a[i][j]);
                       printf("\n");}}
           printf("the upper triangle is \n");
           for(int i=0;i<r;i++)
           {          for(int j=0;j<(r-i);j++)
                      printf("%d\t",a[i][j]);
                       printf("\n");}

}
void multiply()
{   
  
      int k[10][10],l,g;
  
   g=input();
           if (g==1)
             printf(" sorry");
            else
            
            {printf(" the MULTIPLICATION OF THE TWO MATRICES\n");

              for(int i=0;i<r;i++)
  {           for(int j=0;j<c;j++)
  {     k[i][j]=0;    
 for(l=0;l<c;l++)
{k[i][j]+=(a[i][l]*b[l][j]);}
            
  }
}
for(int i=0;i<r;i++)
  {for(int j=0;j<c;j++)
   printf("%d\t",k[i][j]);
                       printf("\n");
                       
  }

}
}





 void main()
{system("CLS");
  int a;
  
  printf("what do you want to do \n");
  printf("press 1 if you want to add  two matrix\n");
  printf("press 2 if you want to subtract two matrix\n");
  printf("press 3 if you want the transpose of matrix \n");
  printf("press 4 if you want to show upper and lower triangle of matrix \n");
  printf("press 5 if you want to multiply two matrix\n");
  
  
  scanf("%d",&a);
  switch(a)
 { case 1: addition();
   break;
   case 2: sub();
   break;
   case 3: transpose();
   break;
   case 4: triangle();
   break;
   case 5: multiply();
   break;
   default: printf("wrong option");

}}
 
