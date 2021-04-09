/* Write a 'c' program to calculate sum of elements of upper triangle of mXn matrix(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],i,j,r,c,sum=0;
clrscr();
printf("\n \t Enter the size of array");
scanf("%d%d",&r,&c);
printf("\n\t the upper triangle element  is::");
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
if((a[i][j]!=0)&&(a[j][i]==0))
{
sum=sum+a[i][j];
}
}
}
}
printf("the sum of upper triangle of matrix is :%d",sum);
 getch();
 }
/*OUTPUT*/
	 Enter the size of array3
	 3
	 the upper triangle element  is::1      2       3
					         0      5       6
					         0      0       9
	 the sum of upper triangle of matrix is :11