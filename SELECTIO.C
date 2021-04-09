#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,j,t;
 clrscr();
 printf("Enter range");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]<a[j])
   {
	t=a[i];
	a[i]=a[j];
	a[j]=t;
   }
  }
 }
 printf("Sorted elements in descending order are:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\nSorted elements in ascending order are:\n");
 for(i=n-1;i>=0;i--)
 printf("%d ",a[i]);
 getch();
}