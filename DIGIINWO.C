#include<stdio.h>
#include<conio.h>
void main()
{
 int a,d,rev=0;
 clrscr();
 printf("Enter value of a");
 scanf("%d",&a);
 while(a>0)
 {
  rev=rev*10+(a%10);
  a=a/10;
 }
while(rev>0)
 {
  d=rev%10;
 switch(d)
  {
   case 1:
	   printf("one ");
	   break;
   case 2:
	   printf("two ");
	   break;
   case 3:
	   printf("three ");
	   break;
   case 4:
	   printf("four ");
	   break;
   case 5:
	   printf("five ");
	   break;
   case 6:
	   printf("six ");
	   break;
   case 7:
	   printf("seven ");
	   break;
   case 8:
	   printf("eight ");
	   break;
   case 9:
	   printf("nine ");
	   break;
   case 0:
	   printf("zero ");
	   break;
   default:
	   printf("error ");
		break;
   }
   rev=rev/10;
   }
  getch();
 }

