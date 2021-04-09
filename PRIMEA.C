#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],b[50],c[50],p,n,k,i,j,q=0;
 clrscr();
 printf("enter how many numbers you want");
 scanf("%d",&n);
 printf("Enter numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0,j=0;i<n;i++,j++)
 c[j]=a[i];
 for(i=0,k=0;i<n;i++,k++)
 {
  for(j=2,p=0;j<c[k];j++)
  {
   if(a[i]%j!=0)
   p++;
   else
   break;
  }
  if(p==c[k]-2)
  {
   b[q]=a[i];
   q++;
  }
 }
 printf("prime numbers are");
 for(i=0;i<q;i++)
 printf("%d ",b[i]);
 getch();
}