#include<stdio.h>
#include<conio.h>
void rev(int *,int n);
void main()
{
 int a[50],n,i;
 clrscr();
 printf("enter how many numbers you want");
 scanf("%d",&n);
 printf("enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 rev(a,n);
 getch();
}
void rev(int *a,int n)
{
 int i;
 for(i=n-1;i>=0;i--)
 printf("%d ",a[i]);
}