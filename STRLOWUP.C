#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
 char a[50];
 int i,n;
 gets(a);
 printf("Enter choice as\n 1:to lower \n2:to upper");
 scanf("%d",&n);
 switch(n)
 {
  case 1:
   for(i=0;a[i]!='\0';i++)
   {
	if(a[i]>=65&&a[i]<=90)
	a[i]=a[i]+32;
   }
   break;
  case 2:
   for(i=0;a[i]!='\0';i++)
   {
	if(a[i]>=97&&a[i]<=122)
	a[i]=a[i]-32;
   }
   break;
  default:
   printf("Error Choice");
   exit(0);
 }
  puts(a);
}