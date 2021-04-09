#include<conio.h>
#include<stdio.h>
#include<math.h>
void series(int,int);
void main()
{
 int x,n;
 clrscr();
 printf("enter the value of x,n");
 scanf("%d%d",&x,&n);
 series(x,n);
 getch();
}
void series(int x,int n)
{
 int i;
 float sum=0.0;
 for(i=0;i<=n;i++)
 {
 sum=sum+(1/pow(x,i));
 }
 printf("%f",sum);
}