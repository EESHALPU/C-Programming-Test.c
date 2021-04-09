#include<stdio.h>
#include<conio.h>
void main()
{
 int a,digit,rev=0;
 printf("enter a number");
 scanf("%d",&a);
 while(a>0)
 {
  rev=rev*10+digit;
  digit=a%10;
  a=a/10;
 }
 printf("%d",rev);
}