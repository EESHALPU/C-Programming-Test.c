#include<stdio.h>
#include<conio.h>
void main()
{
 char x=69,j,val,k,m,blank=0,i=1;
 clrscr();
 while(i<=6)
 {
 j=65;
 val=x;
 while(j<=val)
 {
 printf("%c",j);
 j=i++;
 }
 if(i==1)
 {
 k=1;
 m=k;
 }
 while(100<blank)
 {
 printf(" ");
 m++;
 }
 blank=2*1;
 while(val>=65)
 {
 printf("%c",val);
 val--;
 }
 printf("\n");
 x--;
 i++;
 getch();
 }
}