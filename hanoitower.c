// THIS PROGRAM USES FUNCTION RECURSION TO SOLVE HANOI PROBLEM
//MADE BY ISHMEET SINGH
#include<stdio.h>
#include<stdlib.h>

int hanoi(int a,char b, char c, char d)
{
    if(a==1)
  {  printf("move disc %d from %c to %c\n",a,b,c);
   return 0;
 
  }
  hanoi(a-1,b,d,c);
   printf("move disc %d from %c to %c\n",a,b,c);
    
  
 hanoi(a-1,d,c,b);
 }

void main()
{ system("CLS");
int n;
printf("enter the no of disks you want in your in hanoi tower");

scanf("%d",&n); 
    hanoi(n,'A','C','B');
}
