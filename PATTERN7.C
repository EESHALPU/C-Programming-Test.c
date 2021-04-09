#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,x=5,blank=0,val,j,k,m;
 clrscr();
 for(i=1;i<=6;x--,i++)
 {
  for(j=1;j<=x;j++)
  printf("*");
  if(i==1)
  k=1;
  for(m=k;m<=blank;m++)
  printf(" ");
  blank=2*i;
  for(val=x;val>=1;val--)
  printf("*");
  printf("\n");
 }
 getch();
}