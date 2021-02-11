//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float input()
{
float hbd;
printf("Enter the parameters: ");
scanf("%f",&hbd);
return hbd;
}

float volume(float h, float d, float b)
{
  float vol=0;
  vol=(0.33)*((h*d*b)+(d/b));
  return vol;
}

void output(float vol)
{
printf("The Volume of the tromboloid is: %f\n", vol);
}

int main()
{
float w,x,y,z;
w=input();
x=input();
y=input();
z=volume(w,x,y);
output(z);
return 0;
}
