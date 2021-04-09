#include<stdio.h>
#include<conio.h>
void main()
{
 float bs,gs,hra,da;
 clrscr();
 printf("Enter you basic salary");
 scanf("%f",&bs);
 if(bs>=5000)
 {
  hra=bs*15/100;
  da=bs*150/100;
 }
 else
 {
  hra=bs*10/100;
  da=bs*110/100;
 }
 gs=bs+hra+da;
 printf("%f",gs);
 getch();
}