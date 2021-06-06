//this program gives value of no of digits in a no made by ishmeet singh 
#include<stdlib.h>
#include<stdio.h>
int k,i=1;
int nnos(int n)
{if (n>=10)
{
    

   n=n/10;
   
i++;
 return nnos(n);}
}
 void main()
 
 { system("CLS");
 printf("enter no");
 scanf("%d",&k);
 nnos(k);
   printf( "%d",i);
 }
