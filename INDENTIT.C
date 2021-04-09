#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],i,j,n,s,t=0;
 printf("enter value for n");
 scanf("%d",&n);
 printf("enter a matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   s=i*10+j;
   if(s%11==0)
   {
	if(a[i][j]==1)
	t++;
   }
   else
   {
	if(a[i][j]==0)
	t++;
   }
  }
 }
 if(t==n*n)
 printf("This is a identity matrix");
}