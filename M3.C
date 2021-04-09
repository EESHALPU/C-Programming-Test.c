#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,digit,sum=0,rev=0;
clrscr();
printf("enter the number");
scanf("%d",&num);
n=num;
do
{
digit=num%10;
sum=sum+digit;
rev=rev*10+digit;
num/=10;
}
while(num!=0);
printf("Sum of the digits of no is %d\n ",sum);
printf("Reverse of the num =%d\n",rev);
if(n==rev)
printf("palindrome");
else
printf("not a palindrome");
getch();

}

