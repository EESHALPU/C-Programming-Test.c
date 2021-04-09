#include<stdio.h>
#include<math.h>
void main()
{
 int a,b,c,d,e,f;
 float g;
 printf("enter four numbers");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 e=a+b;
 f=c+d;
 if(e>f)
 {
 g=e/f;
 printf("Answer is %f",g);
 }
 else
 {
 g=f/e;
 printf("Ans. is %f",g);
 }
 printf("You are silly");
}