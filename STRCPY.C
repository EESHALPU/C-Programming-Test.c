#include<stdio.h>
#include<conio.h>
void main()
{
 char a[50],b[50],i,j,n;
 clrscr();
 printf("enter string");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 n++;
 for(j=0,i=0;j<n;j++,i++)
 b[j]=a[i];
 printf("%s",b);
}