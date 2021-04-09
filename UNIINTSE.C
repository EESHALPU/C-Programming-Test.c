#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],b[10],n,i,j,k=0,l=0,c[100],d[50];
 clrscr();
 printf("how many elements you want in set");
 scanf("%d",&n);
 printf("enter elements of 1st set");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter elements of 2nd set");
 for(i=0;i<n;i++)
 scanf("%d",&b[i]);
 printf("union:");
 for(i=0;i<n;i++)
 {
  c[i]=a[i];
  k++;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(b[i]==a[j])
   break;
  }
  if(j==n)
  {
	c[k]=b[i];
	k++;
  }
 }
 for(i=0;i<k;i++)
 printf("%d ",c[i]);
 printf("\nIntersection");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  if(b[j]==a[i])
  break;
  if(j!=n)
  {
   d[l]=b[i];
   l++;
  }
 }
 for(i=0;i<l;i++)
 printf("%d ",d[i]);
 getch();
}