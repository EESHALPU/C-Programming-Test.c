#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,sum=0;
 clrscr();
 printf("enter a number");
 scanf("%d",&n);
 for(i=1;i<=n;i=i+2)
 {
  sum=sum+i;
  printf("%d\t",i);
 }
 printf("\nsum=%d",sum);
 getch();
}