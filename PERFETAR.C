/*Write a'C' progrm to accept 'n' numbers and store all prime numbers in an
array and display this array(30 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,s,j=0,c=0;
clrscr();
printf("\n Enter the n  number" );
do
{
scanf("%d",&n);
i=1;
s=0;
while(i<n)
{
if(n%i==0)
s=s+i;
i++;
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
