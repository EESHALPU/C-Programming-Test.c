#include<stdio.h>
#include<conio.h>
void main()
{
  char a[80],b[80];
  char *s,*p,*q;
  int i;
  clrscr();
  printf("\nEnter a line:\n\t");
  gets(a);
  s=a;
  p=b;
  while(*s)
  {
   q=s;
   if(*s=='t'||*s=='T')
   {
	s++;
	if(*s=='h'||*s=='H')
	{
	 s++;
	 if(*s=='e'||*s=='E');
	  else
	  {
	   for(i=0;i<=2;i++)
	   *p++=*q++;
	  }
	}
	else
	{
	 *p++=*q++;
	 s--;
	}
   }
   else
   *p++=*s;
   s++;
  }
  *p='\0';
  printf("\nAfter deleting 'the' the line is::\n\t");
  puts(b);
  getch();
}