/*Write down macro definition for the following:
1)to find arithmatic mean of two numbers.
2)to convert a uppercase alphabet to lowercase.
3)to obtain the bigger of three numbers.*/
#include<stdio.h>
#include<conio.h>
#define MEAN(X,Y)((X+Y)/2)
#define TOLOWER(X)(X+32)
#define BIG(X,Y,Z)(X>Y&&X>Z?X:Y>X&&Y>Z?Y:Z)
void main()
{
char ch;
int a,b,c,d;
clrscr();
printf("\nEnter any two number:");
scanf("%d%d",&a,&b);
d=MEAN(a,b);
printf("\n Mean is:%d",d);
fflush(stdin);
printf("\n Enter any uppercase letter");
scanf("%c",&ch);
ch=TOLOWER(ch);
printf("\n Lower case character is:%c",ch);
printf("\n Enter any three numbers:");
scanf("%d%d%d",&a,&b,&c);
d=BIG(a,b,c);
printf("\n Big number is :%d",d);
getch();
}
/*OUTPUT*/
Enter any two number:56
56

Mean is:56
Enter any uppercase letterS

Lower case character is:s
Enter any three numbers:32
-98
54
Big number is :54
