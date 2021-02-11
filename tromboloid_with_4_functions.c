//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
int input()
{
int hbd;
printf("Enter the parameters: ");
scanf("%d",&hbd);
return hbd;
}

int volume(int h, int d, int b)
{
  int vol=0;
  vol=(0.33)*((h*d*b)+(d/b));
  return vol;
}

void output(int vol)
{
printf("The Volume of the tromboloid is: %d\n", vol);
}

int main()
{
int w,x,y,z;
w=input();
x=input();
y=input();
z=volume(w,x,y);
output(z);
return 0;
}
