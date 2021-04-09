#include<stdio.h>
#include<conio.h>
void main()
{
 struct student
 {
  char n[20],add[20];
 }a[50];
 int n,i,j;
 char n1[20],n2[20];
 clrscr();
 printf("enter how many students you want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter name,address for %dth student\n",i+1);
  scanf("%s%s",&a[i].n,&a[i].add);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if((strcmp(a[i],a[j]))>0)
   {
	strcpy(n1,a[i].n);
	strcpy(a[i].n,a[j].n);
	strcpy(a[j].n,n1);
	strcpy(n2,a[i].add);
	strcpy(a[i].add,a[j].add);
	strcpy(a[j].add,n2);
   }
  }
 }
 printf("\nname\taddress\n");
 for(i=0;i<n;i++)
 printf("%s\t%s\n",a[i].n,a[i].add);
 getch();
}