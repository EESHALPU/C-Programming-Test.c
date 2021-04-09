#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0;
 char ch;
 for(;;)
 {
 do
 {
 printf("enter a number");
 scanf("%d",&n);
 sum=sum+n;
 printf("%d",sum);
 printf("do you want to continue?");
 scanf("%c",&ch);
 }
 while(ch=='y'||ch=='Y');
 if(ch!='y'||ch!='Y')
 break;
}
 getch();
}