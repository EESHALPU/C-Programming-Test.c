#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,low,big,i;
 clrscr();
 printf("how many elements");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 big=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]>big)
  big=a[i];
  i++;
 }
 for(i=0;i<n;i++)
 {
  if(a[i]<low)
  low=a[i];
  i++;
 }
 printf("Max=%d & min=%d",big,low);
 getch();
}