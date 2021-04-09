#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20][20],t[20];
 int n,i,j;
 clrscr();
 printf("Enter how many names you want");
 scanf("%d",&n);
 printf("enter names");
 for(i=0;i<n;i++)
 scanf("%s",&a[i]);
 for(j=0;j<n;j++)
 {
  for(i=j;i<n;i++)
  {
   if((strcmp(a[i],a[j]))<0)
   {
	strcpy(t,a[i]);
	strcpy(a[i],a[j]);
	strcpy(a[j],t);
   }
  }
 }
 for(i=0;i<n;i++)
 printf("%s\n",a[i]);
 getch();
}