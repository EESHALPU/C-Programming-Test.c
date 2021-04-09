#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int n,*p,i,sum=0;
 clrscr();
 printf("enter how many nmbers");
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 printf("Enter numbers");
 for(i=0;i<n;i++,p++)
 {
  scanf("%d",p);
  sum=sum+(*p);
 }
 printf("%d",sum);
 getch();
}