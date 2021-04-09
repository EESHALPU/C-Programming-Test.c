#include<stdio.h>
#include<conio.h>
void display(int a[][50],int,int);
void main()
{
 int a[50][50],i,j,n,m;
 clrscr();
 printf("enter no of rows and colunms for matrices");
 scanf("%d%d",&n,&m);
 printf("enter elements for matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  scanf("%d",&a[i][j]);
 }
 display(a,n,m);
 getch();
}
void display(int a[][50],int n,int m)
{
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  printf("%d ",a[i][j]);
  printf("\n");
 }
}