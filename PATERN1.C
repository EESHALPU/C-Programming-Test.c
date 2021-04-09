#include<conio.h>
#include<stdio.h>
void main()
{
 int a,i,j,k,spaces=39;
 clrscr();
 printf("Enter anumbe");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
  for(j=1;j<=spaces;j++)
  printf(" ");
  for(k=1;k<=i;k++)
  printf("*");
  printf("\n");
  spaces--;
 }
 getch();
}