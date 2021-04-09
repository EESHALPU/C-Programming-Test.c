#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],i,j,b[100];
 printf("enter a string");
 gets(a);
 for(i=0,j=0;i<strlen(a);i++)
 {
  if(a[i]!='a'&&a[i]!='A'&&a[i]!='e'&&a[i]!='E'&&a[i]!='i'&&a[i]!='I'&&a[i]!='o'&&a[i]!='O'&&a[i]!='u'&&a[i]!='U')
  {
   b[j]=a[i];
   j++;
  }
 }
 b[j]='\0';
 puts(b);
 getch();
}