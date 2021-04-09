/* write a program to pass one number from commandline and check
that number is perfect or not*/
#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[])
{
int no,sum=0,a=1;
clrscr();
if (argc!=2)
{
printf("\n Wrong parameters");
getch();
exit(0);
}
no=atoi(argv[1]);
/* atoi converts string into number*/
while(a<no)
{
if(no%a==0)
{
sum=sum+a;
}
a++;
}
if(sum==no)
printf("%d is perfect number ",sum);
else
printf("%d is not perfect number",sum);
getch();
}
/*OUTPUT*/
C:\TC\BIN>commandl 5
5 is not perfect number

C:\TC\BIN>command 6
6 is perfect number