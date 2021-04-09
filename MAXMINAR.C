/*Write a 'C' program to accept 'n' numbers from user,store these numbers into an array
Find out maximum and minimum mumber from an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],max=0,min=0,i,n;
clrscr();
printf("\n \t Enter the size of array");
scanf("%d",&n);
printf("\n \t Enter the array element");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=a[0];
min=a[0];
printf("\n\t The maximum and minimum element of an array is::");
for(i=0;i<n;i++)
{
if(a[i]>max)
{
 max=a[i];
 }
if(a[i]<min)
{
min=a[i];
 }
}
printf("\n\t the maximum is:%d",max);
printf("\n\t the miniimum is:%d",min);
getch();
}
  /*OUTPUT*/
	   Enter the size of array5

	   Enter the array element69
		    0
		    23
		    45
		    87

	   The maximum and minimum element of an array is::
	   the maximum is:87
	   the miniimum is:0