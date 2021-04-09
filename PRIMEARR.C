/*Write a'C' progrm to accept 'n' numbers and store all prime numbers in an
array and display this array(30 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j=0,c=0,s=0,no;
clrscr();
printf("\n Enter the n  number" );
do
{
scanf("%d",&n);
no=n;

for(i=1;i<n;i++)
{
if(n%i==0)
{
s=s+i;
}
}
if(s==n)
{
a[j]=n;
j++;
c++;
}

}while(n>0);
printf("\nThe perfect numbers in an array:");
for(j=0;j<c;j++)
printf("%d\t",a[j]);
printf("\n");
getch();
}
/*OUTPUT*/
