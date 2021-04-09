#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],n,i,j,sum=0,s=0;
 printf("Enter value for n as in n*n");
 scanf("%d",&n);
 printf("enter numbers");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
   sum=sum+a[i][j];
   if(i+j==n-1)
   s=s+a[i][j];
  }
 }
 printf("sum of major diagonal elements is %d and minor is %d",sum,s);
 getch();
}