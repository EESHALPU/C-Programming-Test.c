#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50][50],b[50][50],i,j,n,t=0,ch;
 printf("enter value for n");
 scanf("%d",&n);
 printf("enter a matrix");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
 }
 printf("enter choice as 1:symmetric 2:identity");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 b[j][i]=a[i][j];
	}
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	 if(b[i][j]==a[i][j])
	 t++;
	}
	if(t==n*n)
	printf("it is symmetric matrix");
	else
	printf("not");
	break;
  case 2:
	for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
	  {
	   if(i==j)
	   {
		if(a[i][j]==1)
		t++;
	   }
	   else
	   {
		if(a[i][j]==0)
		t++;
	   }
	  }
	 }
	 if(t==n*n)
	 printf("This is a identity matrix");
	 else
	 printf("not");
	 break;
  default:
	printf("enter proper choice");
 }
 getch();
}