#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copy()
{ char str1[15];
int i;
    printf("enter the string \n"); 
    
    scanf("%s",&str1);
    
    char str2[15];
    for( i=0;str1[i]!='\0';++i)
    { str2[i]=str1[i];}
    str2[i]='\0';
 printf("the copied string is \n");
    printf(str2);
    printf("\n");

}
  void length()
{char str1[15];
int i;
 printf("enter the string \n"); 
 scanf("%s",&str1);
     for (i=0;str1[i]!='\0';++i);
    
    printf("Length of the string --> %d", i); }
void reverse()
{char str1[15];
int i,s;

    char str2[15];
    printf("\n enter the string "); 
scanf("%s",&str1);
     for (s=0;str1[s]!='\0';++s);
     for( i=0;str1[i]!='\0';++i)
    { str2[i]=str1[i];}
    str2[i]='\0';
    
s=s-1;
    for( i=0;i<=s;++i)
    { 

        str1[i]=str2[s-i];}
  
 printf("\n the reversed string is ");
 
    printf(str1);
    printf("\n");}
void conca()
{char str1[15];
int i=0,j=0;

    char str2[15],str3[15];
    printf("\n enter the string 1 "); 
scanf("%s",&str1);
printf("\n enter string 2 ");
scanf("%s",&str2);
     while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
  

    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
  
    
    printf("\n the Concatenated string is :\n %s", str3);
}
void main()
{ system("CLS");
int s;
    printf("what do you want to do \n ");
    printf("press 1 for copy \n press 2 for finding length of string \n press 3 for reversing a string\n press 4 for concatenating \n");
    scanf("%d",&s);
    
    switch(s)
   { case 1:  copy();
    break;
    case 2:   length();
    break;
    case 3:   reverse();
    break;
    case 4:   conca();
    break;
    default: printf(" wrong option ");
}}
