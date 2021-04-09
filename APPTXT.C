#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *f,*f1;
 char ch;
 f=fopen("a.txt","r");
 f1=fopen("b.txt","a+");
 if(f==NULL)
 printf("cant open s file");
 if(f1==NULL)
 printf("Cant open d file");
 while(1)
 {
  ch=fgetc(f);
  if(ch==EOF)
  break;
  else
  fputc(ch,f1);
 }
 fclose(f);
 fclose(f1);
}