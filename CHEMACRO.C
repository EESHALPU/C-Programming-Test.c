#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define low(a) (a>=97&&a<=122?printf("lower"):printf("upper"))
#define che(a) (isalpha(a)?printf("alpha"):printf("not alpha"))
#define lar(b,c) (b>c?printf("%d",b):printf("%d",c))
void main()
{
 char a;
 int b,c,ch;
 printf("enter a char");
 scanf("%c",&a);
 printf("enter 2 numbers");
 scanf("%d%d",&b,&c);
 printf("Enter choice as 1:checking case 2:checking alpabet 3:largest");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	low(a);
	break;
  case 2:
	che(a);
	break;
  case 3:
	lar(b,c);
	break;
  default:
	printf("wrong choice");
 }
 getch();
}