#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int *p,n,low,big,i;
 clrscr();
 p=(int *)malloc(n*sizeof(int));
 printf("how many elements");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++,p++)
 scanf("%d",p);
 p--;
 for(i=0;i<n;i++,p--)
 printf("%d ",*p);
 getch();
}