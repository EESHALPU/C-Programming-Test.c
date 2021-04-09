/*Write a 'C ' program to accept 'n'numbers from user,store these
numbers into an array and sort the numbers of an array(20 MARKS)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,t;
clrscr();
printf("\n Enter the size of matrix");
scanf("%d",&n);
printf("\n Enter %d numbers:",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n After Bubble sort\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}

/*OUTPUT*/
 Enter the size of matrix5
 Enter 5 numbers:32
  65
  0
  89
  5
  After Bubble sort
   0       5       32      65      89