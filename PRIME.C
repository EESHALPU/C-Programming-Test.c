#include<stdio.h>
#include<conio.h>
void main()
{
 int a,i,f;
 printf("Enter a number");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {
  if(a%i==0)
  {
   f=1;
   break;
  }
 }
 if(f==1)
 printf("the number is not prime number");
 else
 printf("the number is prime number");
}