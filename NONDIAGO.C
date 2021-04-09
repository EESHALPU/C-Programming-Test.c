/*Write a 'C' program to calculate sum of non-diagonal elements of an nXn
matrix(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,r,c,sum=0;
clrscr();
printf("\n Enter row and column for matrix");
scanf("%d%d",&r,&c);
printf("\n Enter the nXn matrix");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i!=j)
{
if(a[i][j]!=0)
{
sum=sum+a[i][j];
}
}
}
}
printf("\n The sum of non-diagonal elements of nXn matrix is::%d",sum);
getch();
}

/*OUTPUT*/
 Enter row and column for matrix3
 3

  Enter the nXn matrix1
  2
  3
  4
  5
  6
  7
  8
  9
  1       2       3
  4       5       6
  7       8       9

   The sum of non-diagonal elements of nXn matrix is::30