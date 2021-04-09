#include<stdio.h>
#include<conio.h>
void main()
{
 int i,k,a,n;
 printf("Enter a number");
 scanf("%d",&n);
 for(i=15;i>=0;i--)
 {
	a=1<<i;
	k=n&a;
	k==0?printf("0"):printf("1");
 }
}