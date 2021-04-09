#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,j;
 clrscr();
 printf("enter number of rows");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
  for(j=1;j<=i;j++)
  printf("%d ",j);
  printf("\n");
 }
 for(i=a-1;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  printf("%d ",j);
  printf("\n");
 }
 getch();
}