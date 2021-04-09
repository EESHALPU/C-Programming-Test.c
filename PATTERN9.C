/* To generate the pattern
  5
  54
  543
  5432
  */
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,row,j;
 clrscr();
 printf("enter the number of rows");
 scanf("%d",&row);
 for(i=row;i>=1;i--)
 {
  for(j=i;j<=row;j++)
  {
  printf("%d\t",j);
  }
  printf("\n");
 }
 getch();
}
