#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *p;
 char ch;
 p=fopen("y.txt","w+");
 if(p==NULL)
 printf("can't open file");
 else
 {
  while(1)
  {
   ch=getc(p);
   if(ch==EOF)
   break;
   else
   printf("%c",ch);
  }
 }
 fclose(p);
 getch();
}