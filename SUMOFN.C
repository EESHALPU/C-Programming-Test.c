#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 clrscr();
 printf("enter the value fo n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  sum=sum+i;
 }
 printf("%d",sum);
 getch();
}