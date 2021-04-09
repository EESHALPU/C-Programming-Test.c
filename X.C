#include<stdio.h>
#include<conio.h>
float series(int,int);
void main()
{
 int x,n;
 float s;
 printf("enter value for x");
 scanf("%d",&x);
 printf("enter the range");
 scanf("%d",&n);
 series(x,n);
 printf("%f",s);
 getch();
}
float series(int x,int n)
{
 float sum;
 for(i=1;i<=n;i++)
 {
  sum=sum+(1+1/pow(x,n));
 }
 return(sum);
}