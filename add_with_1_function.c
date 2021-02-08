//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("Enter Number:");
  scanf("%d",&a);
  printf("Enter Number:");
  scanf("%d",&b);
  sum=a+b;
  printf("sum of %d and %d is %d\n",a,b,sum);
  return 0;
}
