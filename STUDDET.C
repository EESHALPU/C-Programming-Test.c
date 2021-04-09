#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
  char n[20];
  int r,m1,m2,m3,t;
  float avg;
 }a[50];
 int i,j,k,l,n;
 float m;
 char n1[20];
 clrscr();
 printf("enter how many students you want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter rollno,name,mark1,mark2,mark3 for %dth student\n",i+1);
  scanf("%d%s%d%d%d",&a[i].r,&a[i].n,&a[i].m1,&a[i].m2,&a[i].m3);
 }
 for(i=0;i<n;i++)
 {
  a[i].t=a[i].m1+a[i].m2+a[i].m3;
  a[i].avg=a[i].t/3;
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i].t<a[j].t)
   {
	k=a[i].r;
	a[i].r=a[j].r;
	a[j].r=k;
	l=a[i].t;
	a[i].t=a[j].t;
	a[j].t=l;
	strcpy(n1,a[i].n);
	strcpy(a[i].n,a[j].n);
	strcpy(a[j].n,n1);
	m=a[i].avg;
	a[i].avg=a[j].avg;
	a[j].avg=m;
   }
  }
 }
 printf("\nrollno\tname\ttotal\taverage\n");
 for(i=0;i<n;i++)
 printf("%d\t%s\t%d\t%f\n",a[i].r,a[i].n,a[i].t,a[i].avg);
 getch();
}