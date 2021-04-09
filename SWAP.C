#include<stdio.h>
#include<conio.h>
void main()
{
 int i,k;
 clrscr();
 printf("enter value for i and k");
 scanf("%d%d",&i,&k);
 printf("\n value of i=%d k=%d before swapping", i, k);
 i=i^k;
 k=i^k;
 i=i^k;
 printf("\n value of i=%d k=%d after swapping", i, k);
 getch();
}
