/*Write a program to copy the contents of test.c file into testcopy.c file*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
FILE *fp,*fp1;
clrscr();
fp=fopen("test.txt","r");
fp1=fopen("testcopy.txt","w");
if(fp == NULL || fp1 == NULL)
{
printf("\n Can not open file");
getch();
exit(0);
}
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
fputc(ch,fp1);
}
fclose(fp);
fclose(fp1);
getch();
}

/*OUTPUT*/
C:\TC\BIN>type test.txt
hi my name is abc.

C:\TC\BIN>type testcopy.txt
hi my name is abc.