/* Write a 'C' program to find the union and itersection of the two
sets of integer(store it in two arrays)(20 marks)*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],i,j,ch;
clrscr();
printf("\n Enter the first array element");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("\n Enter the second array element");
for(i=0;i<10;i++)
scanf("%d",&b[i]);
   do
    {

       printf("\n first array:");
       for(i=0;i<10;i++)
       printf("%d\t",a[i]);
       printf("\n second array:");
       for(i=0;i<10;i++)
       printf("%d\t",b[i]);
       printf("\n\t 1>Union \n\t 2>Intersection\n \t 3>Exit");
       scanf("%d",&ch);
       switch(ch)
	{
	   case 1:
	   printf("\n Union:");
	   for(i=0;i<10;i++)
	   printf("%d\t",a[i]);
	   for(j=0;j<10;j++)
	   {
	   for(i=0;i<10;i++)
	   {
	     if(b[j]==a[i])
	       {
		 break;
	       }
	    }
	    if(i==10)
	    printf("%d\t",b[j]);
      }
	break;
   case 2:
       printf("\n Intersection");
       for(j=0;j<10;j++)
       {
       for(i=0;i<10;i++)
       {
       if(b[j]==a[i])
       {
       break;
       }
       }
       if(i!=10)
       printf("%d\t",b[j]);

       }
      break;
  case 3:
      exit();
  default:
     printf("\n Enter valid choice");
   }

}while(ch!=3);
getch();
}


/*OUTPUT*/

 Enter the first array element1
2
3
4
5
6
7
8
9
10

 Enter the second array element2
3
4
5
6
7
8
9
10
11

 first array:1  2       3       4       5       6       7       8       9
10
 second array:2 3       4       5       6       7       8       9       10
11
         1>Union
         2>Intersection
         3>Exit 1

 Union:1        2       3       4       5       6       7       8       9
10      11
 first array:1  2       3       4       5       6       7       8       9
10
 second array:2 3       4       5       6       7       8       9       10
11
         1>Union
         2>Intersection
         3>Exit 2

 Intersection2  3       4       5       6       7       8       9       10

 first array:1  2       3       4       5       6       7       8       9
10
 second array:2 3       4       5       6       7       8       9       10
11
         1>Union
         2>Intersection
         3>Exit

