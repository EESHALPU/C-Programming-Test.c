#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],b[50],i,n,j;
 printf("Enter range for array");
 scanf("%d",&n);
 printf("enter elements of an array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0,j=n-1;i<n&&j>=0;i++,j--)
 b[j]=a[i];
 for(j=0;j<n;j++)
 printf("%d ",b[j]);
}
