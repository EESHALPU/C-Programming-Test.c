/*Write a 'C' program to display the transpose of a given 3X3 mratix(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j;
clrscr();
printf("\n Enter the elements 3X3  matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Transpose of matrix is::");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t %d",a[j][i]);
}
printf("\n");
}
getch();
}
/*OUTPUT*/
 Enter the elements 3X3  matrix1
 2
 3
 4
 5
 6
 7
 8
 9

  Transpose of matrix is::        1       4       7
				  2       5       8
				  3       6       9
