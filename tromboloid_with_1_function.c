//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
float h,d,b,vol=0;
printf("Enter the height of tromboloid");
scanf("%f",&h);
printf("Enter the breadth of tromboloid");
scanf("%f",&b);
printf("Enter the depth of tromboloid");
scanf("%f",&d);
vol=(((h*d*b)+(d/b))/3);
printf("The volume of the tromboloid is %f",vol);
return 0;
}
