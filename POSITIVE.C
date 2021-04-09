#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter a number");
 scanf("%d",&a);
 if(a>0)
 {
  printf("The number is positive");
  if(a%2==0)
  printf("\nthe number is even");
  else
  printf("\nthe number is odd");
 }
 else
 printf("the number is negative");
 getch();
}