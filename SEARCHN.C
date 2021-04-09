#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20][20],t[20];
 int n,i,j,p;
 clrscr();
 printf("Enter how many names you want");
 scanf("%d",&n);
 printf("enter names");
 for(i=0;i<n;i++)
 scanf("%s",&a[i]);
 printf("enter a name to search");
 scanf("%s",&t);
 for(j=0;j<n;j++)
 {
  if((strcmp(a[j],t))==0)
  p=0;
 }
 if(p==0)
 printf("name found");
 else
 printf("not found");
 getch();
}