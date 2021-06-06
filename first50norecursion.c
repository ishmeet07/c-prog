#include<stdlib.h>
#include<stdio.h>
int nnos(int a)
{while (a<=50)
{
    


    printf(" -> %d",a);
 return nnos(a+1);
 } }
 void main()
 
 { system("CLS");
     nnos(1);
 }
