#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],b[3][3],i,j;
 clrscr();
 printf("enter elements of matrix");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  b[j][i]=a[i][j];
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  printf("%d ",b[i][j]);
  printf("\n");
 }
 getch();
}