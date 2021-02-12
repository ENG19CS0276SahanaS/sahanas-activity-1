//WAP to find the distance between two points using structures and 4 functions.
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

struct points
{
float x, y;
}
a1, a2;

float output(float d)
{
    printf("The distance between the two points is: %f \n", d);
}

int main()
{
    float s;
    printf("Co-ordinates of start point:\n");
    a1.x=start();
    a1.y=end();
    printf("Co-ordinates of end point:\n");
    a2.x=start();
    a2.y=end();
    s=calc_dist(a1.x,a2.x,a1.y,a2.y);
    output(s);
    return 0;
}
