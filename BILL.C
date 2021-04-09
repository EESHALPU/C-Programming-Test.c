#include<stdio.h>
#include<conio.h>
void electricity(int);
void telephone(int);
void main()
{
 int ch;
 float u,bill;
 clrscr();
 printf("enter choice\n1:electricity bill\n2:telephone bill");
 scanf("%d",&ch);
 printf("enter number of units");
 scanf("%f",&u);
 switch(ch)
 {
  case 1:
   electricity(u);
  case 2:
	telephone(u);
 }
 getch();
}
void electricity(int u)
{
 float bill;
 if(u<=100)
 bill=0.5*u;
 if(u>100&&u<500)
 bill=1.5*u;
 if(u>=500)
 bill=2*u;
 printf("%f",bill);
}
void telephone(int u)
{
 float bill;
 if(u<=100)
 bill=0.75*u;
 if(u>100&&u<500)
 bill=1.25*u;
 if(u>=500)
 bill=2*u;
 printf("%f",bill);
}

