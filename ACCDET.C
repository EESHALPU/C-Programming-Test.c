#include<stdio.h>
#include<conio.h>
void display();
int n,i;
struct acc
 {
  char n[20];
  int ano,bal;
 }a[20];
void main()
{
 clrscr();
 printf("Enter how many customers you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter accoutno,name,bal for %d th customer",i+1);
  scanf("%d%s%d",&a[i].ano,&a[i].n,&a[i].bal);
 }
 display();
 getch();
}
void display()
{
 printf("\na/c no\tname\tbal\n");
 for(i=0;i<n;i++)
 printf("%d\t%s\t%d\n",a[i].ano,a[i].n,a[i].bal);
}