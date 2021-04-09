#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int a[50][50],n,sum=0,i,j;
 clrscr();
 printf("Enter n as in n*n size of matrix");
 scanf("%d",&n);
 printf("Enter elements of matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
   if(i<j)
   sum=sum+a[i][j];
  }
 }
 printf("%d",sum);
 getch();
}