#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],i,j;
 int n=0;
 clrscr();
 printf("Enter a string");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  for(j=0;j<=i;j++)
  printf("%c",a[j]);
  printf("\n");
  n++;
 }
 for(i=n;i>0;i--)
 {
  for(j=0;j<i-1;j++)
  printf("%c",a[j]);
  printf("\n");
 }
 getch();
}