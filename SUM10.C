#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d,e,f,g,h,i,j,k,sum=0;
 clrscr();
 printf("enter ten number");
 scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
 k=a+b+c+d+e+f+g+h+i+j;
 while(k>0)
 {
  sum=sum+(k%10);
  k=k/10;
 }
 printf("%d",sum);
 getch();
}