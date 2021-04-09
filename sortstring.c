/*Write a 'C' program to accept 5 names from user and store these names into an array
sort these array elements in alphabetical order(20 marks) */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char str[20][20],temp[20];
clrscr();
puts("Enter the  string to be sorted");
for(i=0;i<5;i++)
gets(str[i]);
for(i=0;i<5;i++)
for(j=i+1;j<5;j++)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
printf("The sorted string\n");
for(i=0;i<5;i++)
puts(str[i]);
getch();
}


/*OUTPUT*/
Enter the  string to be sorted
RAHUL
ASHISH
SOUMYA
RIYA
AADI
The sorted string
AADI
ASHISH
RAHUL
RIYA
SOUMYA
