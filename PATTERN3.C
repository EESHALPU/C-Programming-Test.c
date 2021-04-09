#include<stdio.h>
#include<conio.h>
void main()
{
 int row,col,i,j,k;
 printf("enter the number of rows & columns");
 scanf("%d%d",&row,&col);
 for(i=0;i<=row;i++,col--)
 {
  for(j=0;j<col;j++)
  {
   printf(" ");
  }
  for(k=0;k<=i;k++)
  {
   printf("*");
   printf(" ");
  }
  printf("\n");
 }
}