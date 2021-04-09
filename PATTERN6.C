#include<stdio.h>
#include<conio.h>
void main()
{
 char i=1,x=69,blank=0,val,j,k,m;
 clrscr();
 for(i=1;i<=6;x--,i++)
 {
  for(j=65;j<=x;j++)
  printf("%c",j);
  if(i==1)
  k=1;
  for(m=k;m<=blank;m++)
  printf(" ");
  blank=2*i;
  for(val=x;val>=65;val--)
  printf("%c",val);
  printf("\n");
 }
 getch();
}