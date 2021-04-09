#include<stdio.h>
#include<conio.h>
void main()
{
 char i,j;
 int a,b;
 clrscr();
 printf("enter number of rows");
 scanf("%d",&a);
 b=a+65;
 for(i=65;i<=b;i++)
 {
  for(j=65;j<=i;j++)
  {
  printf("%c%c  ",j,j+32);
  }
 printf("\n");
 }
 getch();
}