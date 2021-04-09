/*Write a 'C' program toaccept 10 numbers from user,
store these numbers in an array and find the smallest number from an array using pointer(20marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],i,*sml,*ptr;
clrscr();
printf("\n Enter the 10 array elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
ptr=a;
*sml=0;
for(i=0;i<10;i++)
{
if(*sml>*ptr)
*sml=*ptr;
ptr++;
}
printf("\n Elements of array a:\n");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
printf("\n The Smallest value of array :%d",*sml);
getch();
}
/*OUTPUT*/
 Enter the 10 array elements56
 23
 10
 -8
 0
 58
 96
 45
 4
 1

  Elements of array a:
  56      23      10      -8      0       58      96      45      4       1

   The Smallest value of array :-8