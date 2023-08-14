/*Program for find factorial of given number*/
#include<stdio.h>
void main()
{
 int n,fact;
 n=0;fact=1;
 clrscr();
 printf("\n Welcome to program for finding factorial of given number");
 printf("\n Enter given number");
 scanf("%d",&n);
 while(n!=0)
 {
  fact=fact*n;
  n=n-1;
 }
 printf("\n Factorial=%d",fact);
 printf("\n Thank you");
 getch();
}