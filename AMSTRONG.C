#include<conio.h>
#include<stdio.h>
void main()
{
 int a,s,d,b,sum=0;
 clrscr();
 printf("Enter anumbe");
 scanf("%d",&a);
 b=a;
 while(a>0)
 {
 d=a%10;
 s=d*d*d;
 sum=sum+s;
 a=a/10;
 }
 printf("%d",sum);
 if(sum==b)
 printf("it is a perfect no");
 else
 printf("Not");
 getch();
}