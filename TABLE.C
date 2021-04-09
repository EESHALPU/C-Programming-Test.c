#include<stdio.h>
#include<conio.h>
int main()
{
 int a,i,t=1;
 printf("enter a number");
 scanf("%d",&a);
 while(t<=10)
 {
  i=t*a;
  t=t+1;
  printf("\n %d",i);
 }
 return 0;
}
