#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
  if(a>c)
  printf("greatest number is %d",a);
  else
  printf("greatest number is %d",c);
 }
 else
 {
  if(b>c)
  printf("greatest number is %d",b);
  else
  printf("greatest number is %d",c);
 }
 if(a<c)
 {
  if(a<b)
  printf("smallest number is %d",a);
  else
  printf("\nsmallest number is %d",b);
 }
 else
 {
  if(b<c)
  printf("\nsmallest number is %d",b);
  else
  printf("\nsmallest number is %d",c);
 }
}