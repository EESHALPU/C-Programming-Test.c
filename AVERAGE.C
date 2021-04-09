/*Write a 'c' program to accept'n' numbers from user,store these numbers into an array
and calculate average 'n' numbers(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n,sum=0;
float avg=0.0;
clrscr();
printf("\n Enter the size of array");
scanf("%d",&n);
printf("\n Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\n the average of 'n' elements::%f",avg);
getch();
}
/*OUTPUT*/
 Enter the size of array5

 Enter the array elements2
  3
  4
  5
  6

   the average of 'n' elements::4.000000