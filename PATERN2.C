#include<stdio.h>
#include<conio.h>
void main()
{
 int row,col,i,j,k;
 printf("enter number of row & columns");
 scanf("%d%d",&row,&col);
 for(i=0;i<row;i++,col--)
 {
  for(k=0;k<col;k++)
  printf(" ");
  for(j=0;j<=i;j++)
  {
   printf("*");
  printf(" ");
  }
  printf("\n");
  }
  getch();
}
