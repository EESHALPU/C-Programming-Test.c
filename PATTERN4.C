#include<stdio.h>
#include<conio.h>
void main()
{
 int a,j,i,k=1;
 printf("enter number of rows");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d ",k);
   k=k+2;
  }
  printf("\n");
 }
}