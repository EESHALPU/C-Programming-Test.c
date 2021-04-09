/*Write a menu driven program in 'C' to accept a nXn matrixfrom user and to perform
the following oprations
	1)check whether given matrix is Symmetric or not.
	2)check whether given matrix is Identity Matrix or not.(30 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int ch,a[20][20],i,j,r,c,flag=0,f1=0,f2=0;
clrscr();
printf("\n Enter the row and column for matrix");
scanf("%d%d",&r,&c);
printf("\n Enter the array elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n Enter the choice");
printf("\n 1>Symmetric Matrix \n 2>Identity  Matrix\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=a[j][i])
{
flag=1;
break;
}
}
}
if(flag==0)
printf("\n The given matrix is Symmetric matrix");
else
printf("\n The given matrix is not a Symmetric matrix");
break;
}
case 2:
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{






if(i==j)
{
if(a[i][j]==1)
{
f1=1;
continue;
}
}
else
{
if(i!=j)
{
if(a[i][j]==0)
{
f2=1;
continue;
}
}
}
}
 }
if(f1==1 && f2==1)
printf("\n Given matrix is Identity Matrix");
else
printf("\n Given matrix is not a Identity Matrix");
}
break;
default:
printf("\n Enter Valid choice");
}
getch();
}




















/*OUTPUT*/
 Enter the row and column for matrix3
 3

  Enter the array elements1
  0
  0
  0
  1
  0
  0
  0
  1

   Enter the choice
    1>Symmetric Matrix
     2>Identity  Matrix
     2

      Given matrix is Identity Matrix
 Enter the row and column for matrix3
 3

  Enter the array elements1
  2
  1
  2
  5
  2
  1
  2
  1

   Enter the choice
    1>Symmetric Matrix
     2>Identity  Matrix
     1

      The given matrix is Symmetric matrix