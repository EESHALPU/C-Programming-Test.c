#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,n,a,sum=0,i,j;
 clrscr();
 printf("Enter n as in n*n size of matrix");
 scanf("%d",&a);
 n=a*a;
 p=(int *)malloc(n*sizeof(int));
 printf("Enter elements of matrix");
 for(i=0;i<a;i++)
 {
  for(j=0;j<a;j++,p++)
  {
   scanf("%d",p);
   if(i<j)
   sum=sum+*p;
  }
 }
 printf("%d",sum);
 getch();
}