#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
 FILE *f,*f1;
 char ch;
 fflush(stdin);
 if(argc!=3)
 printf("improper number of arguments");
 f=fopen(argv[1],"r");
 f1=fopen(argv[2],"w");
 if(f==NULL)
 printf("cant open %s file",argv[1]);
 if(f1==NULL)
 printf("Cant open %s file",argv[2]);
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