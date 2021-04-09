#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
 clrscr();
 printf("enter elements of 1st matrix");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
 }
 printf("Enter elements of 2nd matrix");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   for(k=0,sum=0;k<3;k++)
   sum=sum+a[i][k]*b[k][j];
   c[i][j]=sum;
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  printf("%d ",c[i][j]);
  printf("\n");
 }
 getch();
}