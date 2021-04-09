#include<stdio.h>
#include<conio.h>
#include<string.h>
struct lib
{
 int bno;
 char name[20],aut[30];
}a[100];
int n;
void add();
void display();
void list();
void count();
void main()
{
 int ch;
 clrscr();
 printf("how many books you want");
 scanf("%d",&n);
 add();
 printf("Enter choice as 1:add 2:diplay 3:list of books of all author 4:count");
 scanf("%d",&ch);
 switch(ch)
 {
  //case 1:
	//add();
   //	break;
  case 2:
	display();
	break;
  case 3:
	list();
	break;
  case 4:
	count();
	break;
  default:
	printf("tujhya myla tujhya barobar tak");
 }
 getch();
}
void add()
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("enter bookno,name,author for %dth book",i+1);
  scanf("%d%s%s",&a[i].bno,&a[i].name,&a[i].aut);
 }
}
void display()
{
 int i;
 printf("\nbno\tname\tauthor\n");
 for(i=0;i<n;i++)
 printf("%d\t%s\t%s\n",a[i].bno,a[i].name,a[i].aut);
}
void list()
{
  int i,k,r,j;
  char t[20];
  printf("enter author");
  scanf("%s",&t);
  printf("\nbno\tname\n");
  for(i=0;i<n;i++)
  {
   if(strcmp(a[i].aut,t)==0)
   printf("%d %s",a[i].bno,a[i].aut);
  }
}
void count()
{
 printf("%d",n);
}