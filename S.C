#include<conio.h>
#include<stdio.h>
void main()
{
 int i,row,j;
 printf("enter the no of rows");
 scanf("%d",&row);
 for(i=1;i<=row;i++)
 {
 for(j=1;j<=i;j=j+2)
 printf("%d",j);
 }
 printf("\n");
}