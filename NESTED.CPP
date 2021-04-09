#include<stdio.h>
void main()
{
 float bal,bal1;
 char gen,m,f;
 printf("Enter your balance\n and gender");
 scanf("%f%c",&bal,&gen);
 if(gen==f)
 {
  if(bal>5000)
  {
  bal1=(0.05*bal)+bal;
  printf("%f",bal1);
  }
  else
  {
  bal1=(0.02*bal)+bal;
  printf("%f",bal1);
  }
 }
 else
 {
 bal1=(0.02*bal)+bal;
 printf("%f",bal1);
 }
}