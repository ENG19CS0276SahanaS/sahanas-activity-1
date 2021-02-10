//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int num1()
{
    int a; 
    printf("Enter first number:\n");
    scanf("%d",&a);
    return a;
}

int num2()
{
    int b;
    printf("Enter second number:\n");
    scanf("&d",&b);
    return b;
}

int addofnum(int a, int b)
{
    int sum=0;
    sum = a+b;
    return sum;
}

void output(int a, int b, int sum)
{
    printf("Sum of %d + %d is %d\n",a,b,sum);
}

int main()
{
    int x,y,z;
    x=num1();
    y=num2();
    z=addofnum(x,y);
    output(x,y,z);
    return 0;

}
