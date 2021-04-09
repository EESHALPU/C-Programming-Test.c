#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i,sum=0;
 clrscr();
 printf("enter a number");
 scanf("%d",&a);
 b=a;
 for(i=1;i<a;i++)
 {
  if(a%i==0)
  {
   sum=sum+i;
  }
 }
 if(sum==b)
 printf("the number is perfect");
 else
 printf("the number is not prfect");
 getch();
}