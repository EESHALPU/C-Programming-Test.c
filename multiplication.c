/*Write a'C'program for multiplication of two mXn matrices(30 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],b[20][20],c[20][20],i,j,k,r1,c1,r2,c2;
clrscr();
printf("\n Enter the row and column for first matrix");
scanf("%d%d",&r1,&c1);
printf("\n Enter the first matrix element");
   for(i=0;i<r1;i++)
   {
   for(j=0;j<c1;j++)
     {
    scanf("%d",&a[i][j]);
     }
   }
 printf("\n Enter the row and column for second matrix");
 scanf("%d%d",&r2,&c2);
 printf("\n Enter the second matrix element");
 for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
   {
     scanf("%d",&b[i][j]);
   }
  }
  if(r2==c1)
  {
     printf("the multiplication of matrix is::");
    for(i=0;i<r1;i++)
   {
     for(j=0;j<c2;j++)
     {
	c[i][j]=0;
       for(k=0;k<r2;k++)
	{
	  c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
     }
   }
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c2;j++)
     {
       printf("%d\t",c[i][j]);
     }
       printf("\n");
   }
  }
   else
     printf("\n multiplication not possible");
 getch();
}

/*OUTPUT*/
 Enter the row and column for first matrix3
 3

  Enter the first matrix element1
  2
  3
  4
  5
  6
  7
  8
  9

   Enter the row and column for second matrix3
   3

    Enter the second matrix element1
    2
    3
    4
    5
    6
    7
    8
    9
    the multiplication of matrix is::30     36      42
				     66      81      96
				     102     126     150


