#include<stdio.h>
#include<conio.h>
#include<string.h>
void con(char [],char []);
void main()
{
 char a[50],b[50];
 clrscr();
 printf("enter 1st string");
 gets(a);
 printf("enter 2nd string");
 gets(b);
 con(a,b);
 getch();
}
void con(char a[],char b[])
{
 char c[50],i,j,r=0;
 for(i=0;a[i]!='\0';i++)
 {
  c[i]=a[i];
  r++;
 }
 for(j=0;b[j]!='\0';j++,i++)
 {
  c[i]=b[j];
  r++;
 }
 for(i=0;i<r;i++)
 printf("%c",c[i]);
}
