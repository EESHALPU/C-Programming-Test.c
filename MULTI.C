#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,i,c,f=0;
 clrscr();
 printf("enter two number");
 scanf("%d%d",&a,&b);
 if(a<0)
 {
 a=-a;
 c=0;
 }
 if(b<0)
 {
 b=-b;
 c=0;
 }
 for(i=1;i<=b;i++)
 {
  f=f+a;
 }
 if(c==0)
 f=-f;
 printf("%d",f);
 getch();
}