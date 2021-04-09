/*Write a 'C'program to accept the line from user,delete all the occurrences
of word'the' from the line and display the result(30marks)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char s1[100],s2[20];
clrscr();
printf("\nEnter the line");
scanf("%s",s1);
printf(" \n Enter word 'the'");
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{
if(strcmp(s1,s2))
{
s1 = "  ";
}
}
printf("\n The resultant string is::%s",s1);
getch();
}