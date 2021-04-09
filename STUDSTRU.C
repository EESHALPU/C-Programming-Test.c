/*Write a 'c' program to create student structure having fields roll_no,stud_name,mark1,
mark2,mark3.Calculate the total and average of marks and arrange the records in descending order(30 marks)*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
struct student{
int roll_no;
int mark1,mark2,mark3,total,avg;
char name[20];
}stud[20];
int i,n,temp,j;
clrscr();
printf("\nHow many records you want to enter?:");
scanf("%d",&n);
printf("\n Enter detais of  %d students:\n",n);
for(i=0;i<n;i++)
{
printf("\n Enter roll_no:");
scanf("%d",&stud[i].roll_no);
flushall();
printf("\n Enter the student name:");
gets(stud[i].name);
printf("\n Enter the mark1:");
scanf("%d",&stud[i].mark1);
printf("\n Enter the mark2:");
scanf("%d",&stud[i].mark2);
printf("\n Enter the mark3:");
scanf("%d",&stud[i].mark3);
}
for(i=0;i<n;i++)
{
stud[i].total=stud[i].mark1+stud[i].mark2+stud[i].mark3;
printf("\nthe total is::%d",stud[i].total);
stud[i].avg=stud[i].total/3;
printf("\nthe Avarage of student is::%d",stud[i].avg);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(stud[j].roll_no < stud[j+1].roll_no)
{
temp=stud[j].roll_no;
stud[j].roll_no= stud[j+1].roll_no;
stud[j+1].roll_no=temp;
}
}
}







printf("\n The records in descending order::");
printf("\nroll number\tstudent name \ttotal \taverage \n");
printf("************************************************************\n");
for(i=0;i<n;i++)
{
 printf("\n %d\t\t%s\t\t %d\t\t%d",stud[i].roll_no,stud[i].name,stud[i].total,stud[i].avg);
}
getch();
}
/*OUTPUT*/
How many records you want to enter?:3
Enter detais of  3 students:
Enter roll_no:6
Enter the student name:aaa
Enter the mark1:20
Enter the mark2:20
Enter the mark3:20
Enter roll_no:3
Enter the student name:bbb
Enter the mark1:30
Enter the mark2:30
Enter the mark3:30
Enter roll_no:69
Enter the student name:ccc
Enter the mark1:50
Enter the mark2:50
Enter the mark3:50
the total is::60
the Avarage of student is::20
the total is::90
the Avarage of student is::30
the total is::150
the Avarage of student is::50
The records in descending order::
roll number     student name    total   average
************************************************************
 69             aaa              60             20
 6              bbb              90             30
 3              ccc              150            50
