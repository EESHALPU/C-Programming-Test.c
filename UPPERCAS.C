#include<stdio.h>
#include<conio.h>
void main()
{
 char a,b;
 clrscr();
 printf("Enter a charecter");
 scanf("%c",&a);
 if(a<97)
 {
  b=a+32;
 }
 else
 b=a-32;
 printf("%c",b);
 getch();
}