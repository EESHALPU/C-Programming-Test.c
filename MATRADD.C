#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],b[50][50],c[50][50],i,j,n,m;
 clrscr();
 printf("enter no of rows and colunms for matrices");
 scanf("%d%d",&m,&n);
 printf("enter elements for 1st matrix");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter elements for 2nd matrix");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&b[i][j]);
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  c[i][j]=a[i][j]+b[i][j];
 }
 printf("answer is \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%d ",c[i][j]);
  printf("\n");
 }
 getch();
}