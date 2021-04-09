#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,j,n,b=0;
 clrscr();
 printf("how many elements u want to enter:");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  b=0;
  for(j=0;j<n;j++)
  {
   if(a[i]==a[j])
   b++;
  }
	printf("%d is present for %d times\n",a[i],b);
  }
 getch();
}