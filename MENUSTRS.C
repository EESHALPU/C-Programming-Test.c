#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50],b[50],c;
 int ch,i,j,k,t=0,n,p=0;
 clrscr();
 printf("Enter a string");
 gets(a);
 printf("Enter a charecter");
 scanf("%c",&c);
 printf("enter a substring");
 scanf("%s",&b);
 printf("enter choice as 1:substring %s present or not 2:occurance of %c",b,c);
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	 for(i=0;i<strlen(a);i++)
	 {
	  t=0;
	  k=i;
	  for(j=0;j<strlen(b);j++,k++)
	  {
	   if(a[k]==b[j])
	   t++;
	  }
	  if(t==strlen(b))
	  p++;
	 }
	 if(p!=0)
	 printf("substring is present for %d times",p);
	 else
	 printf("substring is not present");
	 break;
   case 2:
	 for(i=0;i<strlen(a);i++)
	 if(a[i]==c)
	 p++;
	 if(p!=0)
	 printf("charecter found for %d times",p);
	 else
	 printf("charecter not found");
	 break;
   default:
	 printf("wrong choice");
  }
 getch();
}