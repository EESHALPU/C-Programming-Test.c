/* Write a 'C' program to  calculate sum of elements of
 a mXn matrix(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int b[20][20], i,j,r,c,sum=0;
clrscr();
printf("\nEnter the row and column for mXn matrix");
scanf("%d%d",&r,&c);
printf("\n Enter the mXn matrix elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n The mXn matrix elements are:;");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum=sum+b[i][j];
}
}
printf("\n The sum of elements a mXn matrix is::%d",sum);
getch();
}
/*OUTPUT*/
Enter the row and column for mXn matrix 3
3

 Enter the mXn matrix elements1
 1
 1
 1
 1
 1
 1
 1
 1

  The mXn matrix elements are:;1 1       1
  1       1       1
  1       1       1

   The sum of elements a mXn matrix is::9