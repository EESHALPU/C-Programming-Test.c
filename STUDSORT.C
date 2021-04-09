/*Write a 'c' program to create student structure having field stud_name,
and address.Accept the details of 'n' students into the structure,rearrange the data in alphabetical order
of stud_name and display the result(30 marks).*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void main()
{
struct student{
char address[40];
char name[20];
char temp[20];
}stud[20];
int i,n,j;
clrscr();
printf("\nHow many records you want to enter?:");
scanf("%d",&n);
printf("\n Enter details of  %d students:\n",n);
for(i=0;i<n;i++)
{
printf("\n Enter the student name:");
scanf("%s",stud[i].name);
flushall();
printf("\n Enter the address of the student:");
scanf("%s",stud[i].address);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(strcmp(stud[i].name,stud[j].name)>0)
{
strcpy(stud[i].temp,stud[i].name);
strcpy(stud[i].name,stud[j].name);
strcpy(stud[j].name,stud[i].temp);
}
}
printf("The data in alphabetical order::");
printf("\n stud_name is::\t\n");
for(i=0;i<n;i++)
puts(stud[i].name);
getch();
}
/*OUTPUT*/

 How many records you want to enter?:5
 Enter details of  5 students:
 Enter the student name:wasim
 Enter the address of the student:lahor
 Enter the student name:jiya
 Enter the address of the student:jaipur
 Enter the student name:deepu
 Enter the address of the student:delhi
 Enter the student name:ashwin
 Enter the address of the student:mumbai
 Enter the student name:pritam
 Enter the address of the student:pune
 The data in alphabetical order::
 stud_name is:
 ashwin
 deepu
 jiya
 pritam
 wasim
