#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,j;
 printf("enter number of rows");
 scanf("%d",&a);
 for(i=a;i>=1;i--)
 {
  for(j=i;j<=a;j++)
  printf("%d ",j);
  printf("\n");
 }
}