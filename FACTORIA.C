#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
 int a,i;
 clrscr();
 printf("enter a number");
 scanf("%d",&a);
 fact(a);
 getch();
}
void fact(int a)
{
 int i;
 for(i=1;i<a;i++)
 {
  if(a%i==0)
  {
   printf("%d ",i);
  }
 }
}
