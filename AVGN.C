#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,sum=0;
 float avg;
 clrscr();
 printf("enter how many numbers you want");
 scanf("%d",&n);
 printf("enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 sum=sum+a[i];
 avg=sum/n;
 printf("%f",avg);
 getch();
}