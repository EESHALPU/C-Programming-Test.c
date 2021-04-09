#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *p,*q;
 int i;
 char a[200],ch;
 clrscr();
 p=fopen("s.txt","w+");
 if(p==NULL)
 printf("cant open file");
 printf("enter the data");
 gets(a);
 fprintf(p,"%s",a);
 fclose(p);
 q=fopen("s.txt","r");
 while(1)
 {
  ch=fgetc(q);
  if(ch==EOF)
  break;
  else
  printf("%c",ch);
 }
 getch();
}