/* Write a 'c' program to calculate sum of elements of lower triangle of mXn matrix(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,r,c,sum=0;
clrscr();
printf("\n \t Enter the size of array");
scanf("%d%d",&r,&c);
printf("\n\t the lower triangle element  is::");
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
if(i!=j)
{
if((a[j][i]!=0)&&(a[i][j]==0))
{
sum=sum+a[j][i];
}
}
}
}
printf("\n \t the sum of lower triangle of matrix is :%d",sum);
 getch();
 }

 /*OUTPUT*/
	  Enter the size of array3
	  3
	  the lower triangle element  is::1      0       0
					          4      5       0
					          7      8       9
	  the sum of lower triangle of matrix is :19