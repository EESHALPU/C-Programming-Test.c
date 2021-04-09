#include<stdio.h>
#include<conio.h>
void show(int n)
{
 int i,k,a;
 for(i=15;i>=0;i--)
 {
	a=1<<i;
	k=n&a;
	k==0?printf("0"):printf("1");
 }
}
void main()
{
  int n,k,ch;
  clrscr();
  printf("Enter a decimal decimal no\n");
  scanf("%d",&n);
  printf("binary equivalent of %d is :",n);
  show(n);
  printf("\n");
  printf("Enter choice as 1:rshift 2:lshift 3:complement");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
	k=n>>1;
	printf("right shifted binary of %d is :",n);
	show(k);
	break;
   case 2:
	k=n<<1;
	printf("left shifted binary of %d is :",n);
	show(k);
	break;
   case 3:
	k=~n;
	printf("complement of %d is :",n);
	show(k);
	break;
   default:
	printf("enter proper choice");
  }
 getch();
}