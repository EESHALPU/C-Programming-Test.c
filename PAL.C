#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,rev=0;
 printf("Enter a number");
 scanf("%d",&a);
 b=a;
 while(a>0)
 {
  rev=rev*10+(a%10);
  a=a/10;
 }
 printf("%d",rev);
 if(b==rev)
 printf("the number is palindrome");
 else
 printf("the number is not palindrome");
}