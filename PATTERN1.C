#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,j,k=1;
 clrscr();
 printf("enter the number of rows");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 for(j=1;j<=i;j++)
  {
  printf("%d  ",k);
  k++;
  }
  printf("\n");
 }
 getch();
}