#include<conio.h>
#include<stdio.h>
void series(int);
void main()
{
 int x,n;
 clrscr();
 printf("enter the value of n");
 scanf("%d",&n);
 series(n);
 getch();
}
void series(int n)
{
 int i,j,f=1;
 float sum=0.0;
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++)
 {
  f=f*j;
 }
 sum=sum+(i/f);
 }
 printf("%f",sum);
}