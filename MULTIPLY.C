#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,sum=0,neg,i;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 if(a<0)
 {
 a=-a;
 neg=1;
 }
 if(b<0)
 {
 b=-b;
 neg=1;
 }
 for(i=1;i<=b;i++)
 sum=sum+a;
 if(neg==1)
 sum=-sum;
 printf("%d",sum);
 }