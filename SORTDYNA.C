#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,*q,n,i,j,t;
 clrscr();
 printf("Enter range");
 scanf("%d",&n);
 p=(int *)malloc(n*sizeof(int));
 q=(int *)malloc(n*sizeof(int));
 printf("Enter numbers");
 for(i=0;i<n;i++,p++,q++)
 {
  scanf("%d",p);
  q=p;
 }
 for(i=0;i<n;i++,p--,q--);
 for(i=0;i<n;i++,p++)
 {
  for(j=0;j<n;j++,q++)
  {
   if(*p<*q)
   {
	t=*p;
	*p=*q;
	*q=t;
   }
  }
  for(j=0;j<n;j++,q--);
 }
 for(i=0;i<n;i++,p--);
 printf("Sorted elements in ascending order are:\n");
 for(i=0;i<n;i++,p++)
 printf("%d ",*p);
 getch();
}