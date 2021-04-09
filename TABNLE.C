#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,f;
 clrscr();
 printf("enter a number");
 scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
  f=a*i;
  printf("\n%d* %d\t=%d ",a,i,f);
 }
 getch();
}