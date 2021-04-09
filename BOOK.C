#include<stdio.h>
#include<conio.h>
void main()
{
 struct book
 {
  char t[20],at[20],p[20];
  int n;
  float c;
 }a[50];
 int n,i;
 char t[20];
 clrscr();
 printf("enter how many books you want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter bookno,title,author,publisher,cost for %dth book\n",i+1);
  scanf("%d%s%s%s%f",&a[i].n,&a[i].t,&a[i].at,&a[i].p,&a[i].c);
 }
  printf("enter author");
  scanf("%s",&t);
  printf("\nbookno\ttitle\tpublisher\tcost\n");
  for(i=0;i<n;i++)
  {
   if(strcmp(a[i].at,t)==0)
   printf("%d\t%s\t%s\t\t%f\n",a[i].n,a[i].t,a[i].p,a[i].c);
  }
  printf("enter publiaher");
  scanf("%s",&t);
  printf("\nbookno\ttitle\tpublisher\tcost\n");
  for(i=0;i<n;i++)
  {
   if(strcmp(a[i].p,t)==0)
   printf("%d\t%s\t%s\t\t%f\n",a[i].n,a[i].t,a[i].at,a[i].c);
  }
  printf("\nBooks costing above 500");
  printf("\nbookno\ttitle\tauthor\tpublisher\tcost\n");
  for(i=0;i<n;i++)
  if(a[i].c>=500)
  printf("%d\t%s\t%s\t%s\t\t%f\n",a[i].n,a[i].t,a[i].at,a[i].p,a[i].c);
  printf("\nall books");
  printf("\nbookno\ttitle\tauthor\tpublisher\tcost\n");
  for(i=0;i<n;i++)
  printf("%d\t%s\t%s\t%s\t\t%f\n",a[i].n,a[i].t,a[i].at,a[i].p,a[i].c);
  getch();
}
void linkfloat()
{
 float a=0,*b;
 b=&a;
 a=*b;
}