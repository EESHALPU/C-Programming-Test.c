#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],*p,n,low,i;
 clrscr();
 printf("how many elements");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 p=a;
 for(i=0;i<n;i++,p++)
 {
  if(*p<low)
  low=*p;
 }
 printf("min=%d",low);
 getch();
}