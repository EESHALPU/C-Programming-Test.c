#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50],b[50];
 int ch;
 clrscr();
 printf("Enter a string");
 gets(a);
 printf("Enter another string to compare or catenate");
 gets(b);
 printf("enter choice as 1:length 2:copy 3:compare 4:concatenate");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	printf("%d",strlen(a));
	break;
  case 2:
	strcpy(b,a);
	printf("1:%s\n2:%s",a,b);
	break;
  case 3:
	if((strcmp(a,b))==0)
	printf("Both are same");
	else
	printf("bieder sind nicht gleich");
	break;
  case 4:
	strcat(a,b);
	puts(a);
	break;
  default:
	printf("enter proper choice");
  }
 getch();
}