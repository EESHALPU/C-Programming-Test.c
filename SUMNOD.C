#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],n,i,j,sum=0;
 clrscr();
 printf("enter value for n in n*n matrix");
 scanf("%d",&n);
 printf("enter elements of matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if((i+j)%2!=0)
   sum=sum+a[i][j];
  }
 }
 printf("%d",sum);
 getch();
}