#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *p,*q;
 char ch,an='Y';
 int i,g=0;
 struct student
 {
  char n[20],ad[50];
  int no;
  float pr;
 }a[30];
 clrscr();
 p=fopen("y.txt","w+");
 if(p==NULL)
 printf("can't open file");
 else
 {
  for(i=0;an=='y'||an=='Y';i++)
  {
   printf("enter stud_no,stud_name,stud_addr,stud_per for %d th student\n",i+1);
   scanf("%d%s%s%f", &a[i].no, a[i].n, a[i].ad,&a[i].pr);
   printf("want to enter another(Y/N)\n");
   an=getche();
   g++;
  }
  fprintf(p,"\nstud_no\tstud_name\tstud_addr\tstud_per\n");
  for(i=0;i<g;i++)
  fprintf(p,"%d\t%s\t\t%s\t\t%f\n",a[i].no,a[i].n,a[i].ad,a[i].pr);
  fclose(p);
  q=fopen("y.txt","r");
  while(1)
  {
   ch=getc(q);
   if(ch==EOF)
   break;
   else
   printf("%c",ch);
  }
 }
 fflush(stdin);
 fclose(q);
 getch();
}
void linkfloat()
{
 float a=0,*b;
 b=&a;
 a=*b;
}