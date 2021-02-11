//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float calc_dist(float x1, float x2, float y1, float y2)
{
    float x, y, d;
    x=x2-x1;
    y=y2-y1;
    d=sqrt((x*x)+(y*y));
    return d;
}

float start()
{
    float a;
    printf("Enter X co-ordinate: ");
    scanf("%f", &a);
    return a;
}

float end()
{
    float b;
    printf("Enter Y co-ordinate: ");
    scanf("%f", &b);
    return b;
}

float output(float d)
{
    printf("The distance between two points is: %f \n", d);
}

int main()
{
    float w,x,y,z,s;
    printf("Co-ordinates of start point:\n");
    w=start();
    x=end();
    printf("Co-ordinates of end point:\n");
    y=start();
    z=end();
    s=calc_dist(w,x,y,z);
    output(s);
    return 0;
}
