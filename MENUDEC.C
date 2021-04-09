#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i=1,b,k=0,ch;
 clrscr();
 printf("enter a number");
 scanf("%d",&b);
 printf("enter choice as 1:octal 2:hexadecimal");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	while(b>1)
	{
	 k=k+(b%8)*i;
	 i=i*10;
	 b=b/8;
	}
	printf("%d",k);
	break;
  case 2:
	for(i=0;b>0;i++,k++)
	{
	 a[i]=b%16;
	 b=b/16;
	}
	for(i=k-1;i>=0;i--)
	{
	 switch(a[i])
	 {
	  case 10:
		printf("A");
		break;
	  case 11:
		printf("B");
		break;
		case 12:
		printf("C");
		break;
	  case 13:
		printf("D");
		break;
	  case 14:
		printf("E");
		break;
	  case 15:
		printf("F");
		break;
	  default:
		printf("%d",a[i]);
	 }
	}
  }

 getch();
}