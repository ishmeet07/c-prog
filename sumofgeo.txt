//this is made by ishmeet singh
// this shows sum of geometric series
#include<stdio.h>
#include<math.h>
int main()
{ system("CLS");
 int a,n;
 float r;
 printf("enter the no.  of elements in series");
 scanf("%d",&n);
 printf("enter the first no");
 scanf("%d",&a);
 printf("enter the common ratio");
 scanf("%f",&r);
 
 float p=(pow(r,n));
 float sum=((a*(p-1))/(r-1));
 printf("sum of geometric series is %f",sum);
return 0;
 }
