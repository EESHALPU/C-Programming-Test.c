/*Write a 'C' progam to write a macro definition for the following
	1)To test whether a character is a lower case letter or not
	2)TO check whether a character is alphabet or not
	3)To obtain the largest of two numbers.(30 marks)*/
#include<stdio.h>
#include<conio.h>
#define ISLOWER(x)(x>=97 && x<=122?1:0)
#define ISUPPER(x)(x<=65 && x<=90 ?1:0)
#define ISALPHA(x)(ISUPPER(x)|| ISLOWER(x))
#define BIG(x,y)(x>y?x:y)
void main()
{
char ch;
int a,b,c;
clrscr();
printf("\n Enter any alphabet or character");
scanf("%c",&ch);
if ( c=ISUPPER(ch)==1)
printf("\n entered character is capital letter");
else if ( c = ISLOWER(ch)==1)
printf("\n entered character is small letter");
else if( c = ISALPHA(ch)!=1)
printf("\n entered character is an alphabet");
printf("\n Enter two numbers");
scanf("%d%d",&a,&b);
c=BIG(a,b);
printf("\n Bigger number is:%d",c);
getch();
}

/*OUTPUT*/
 Enter any alphabet or characterS

 entered character is an alphabet
 Enter two numbers56
 -98

 Bigger number is:56
 Enter any alphabet or characterh

 entered character is small letter
 Enter two numbers56
 12

Bigger number is:56
