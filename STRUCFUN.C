#include<stdio.h>
#include<conio.h>
void stu(int,char*,char*);
void main()
{
 struct student
 {
  char n[20],c[6];
  int r;
 }a[50];
 int n,i;
 clrscr();
 printf("enter how many students you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter rollno,name,class for %dth student\n",i+1);
  scanf("%d%s%s",&a[i].r,&a[i].n,&a[i].c);
 }
 printf("\nrollno\tname\tclass\n");
 for(i=0;i<n;i++)
 stu(a[i].r,a[i].n,a[i].c);
 getch();
}
void stu(int r,char *n,char *c)
{
 printf("%d\t%s\t%s\n",r,n,c);
}