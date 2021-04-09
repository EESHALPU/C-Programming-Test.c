#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *p;
 char ch;
 int a,c=0,w=0,l=1;
 p=fopen("c.txt","r");
 if(p==NULL)
 printf("can't open file");
 while(1)
 {
  ch=fgetc(p);
  if(ch==EOF)
  break;
  c++;
  if(ch==' '||ch=='?'||ch=='.'&&ch!=','||ch=='!')
  w++;
  if(ch=='\n')
  l++;
 }
 printf("\n%d charecters,%d words,%d lines are present",c,w,l);
 getch();
}