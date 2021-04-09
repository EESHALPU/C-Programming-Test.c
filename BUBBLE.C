#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,j,n,t;
 clrscr();
 printf("Enter range");
 scanf("%d",&n);
 printf("Enter elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(a[j]>a[j+1])
   {
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
   }
  }
 }
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 getch();
}
