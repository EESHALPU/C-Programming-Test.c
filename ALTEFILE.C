#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *p;
 char ch;
 int i;
 p=fopen("c.txt","r");
 if(p==NULL)
 printf("can't open file");
 else
 {
  for(i=1;;i++)
  {
   ch=fgetc(p);
   if(ch==EOF)
   break;
   if(i%2!=0)
   printf("%c",ch);
  }
 }
 fclose(p);
}