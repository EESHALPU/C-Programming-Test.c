#include<stdio.h>
#include<conio.h>
void main()
{
 char a,c,b;
 printf("Enter a character\n");
 scanf("%c",&a);
 printf("%d",a);
 b=a-1;
 c=a+1;
 printf("\nnext character %c",c);
 printf("\nprevious character %c",b);
 getch();
}