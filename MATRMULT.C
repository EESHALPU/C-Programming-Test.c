#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],b[50][50],c[50][50],i,j,n,m,k,sum=0;
 clrscr();
 printf("enter no of rows and colunms for matrices");
 scanf("%d%d",&n,&m);
 printf("enter elements for 1st matrix\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter elements for 2nd matrix\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  scanf("%d",&b[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n||j<m;j++)
  {
   sum=0;
   for(k=0;k<n;k++)
   sum=sum+a[i][k]*b[k][j];
   c[i][j]=sum;
  }
 }
 printf("answer is \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  printf("%d ",c[i][j]);
  printf("\n");
 }
 getch();
}