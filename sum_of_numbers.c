//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int main()
{
  int n,i,a,s=0;
  printf("Enter how many times the number to be added: \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   printf("Enter a number: \n");
   scanf("%d",&a);
   s=s+a;
  }
  printf("Sum of n different numbers is: %d", s);
  return 0;
 }
