#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
 int a[50],n,i,*p,sum=0;
 printf("enter range");
 scanf("%d",&n);
 printf("Ente numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 p=a;
 for(i=0;i<n;i++,p++)
 sum=sum+*p;
 printf("answer is %d",sum);
}

