#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int b[50][50],n,a,sum=0,i,j;
 clrscr();
 printf("Enter n as in n*n size of matrix");
 scanf("%d",&a);
 printf("Enter elements of matrix");
 for(i=0;i<a;i++)
 {
  for(j=0;j<a;j++)
  {
   scanf("%d",&b[i][j]);
   if(i>j)
   sum=sum+b[i][j];
  }
 }
 printf("%d",sum);
 getch();
}