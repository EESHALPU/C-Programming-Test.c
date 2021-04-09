#include<stdio.h>
#include<conio.h>
void sub(char [],char []);
void main()
{
 char a[50],b[50];
 clrscr();
 printf("enter main string\n");
 gets(a);
 printf("Enter substring\n");
 scanf("%s",&b);
 sub(a,b);
 getch();
}
void sub(char a[],char b[])
{
 int i,j,k,p=0,n=0,s,t;
 for(j=0;b[j]!='\0';j++)
 n++;
 for(k=0;a[k]!='\0';k++)
 {
  t=0;
  i=k;
  for(j=0;b[j]!='\0';i++,j++)
  {
   if(a[i]==b[j])
   {
	t++;
   }
  }
  if(t==n)
  {
   s=1;
   p++;
  }
 }
 if(s==1)
 printf("substring is present in main string for %d times\n",p);
}