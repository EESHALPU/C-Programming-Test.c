/*Write a 'C' program to swap the values of two variables by using call by reference(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int *, int *);
int x,y;
clrscr();
printf("\n Enter two numbers::");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("After interchaning x=%d and y=%d",x,y);
getch();
}
void swap(int *px,int *py)
{
int temp;
temp=*px;
*px=*py;
*py=temp;
}
/*output*/
 Enter two numbers::65
 39
 After interchaning x=39 and y=65