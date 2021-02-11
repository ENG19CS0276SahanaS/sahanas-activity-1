//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int calc_dist(int x1, int x2, int y1, int y2)
{
    int x, y, d;
    x=x2-x1;
    y=y2-y1;
    d=sqrt((x*x)+(y*y));
    return d;
}

int start()
{
    int a;
    printf("Enter X co-ordinate: ");
    scanf("%d", &a);
    return a;
}

int end()
{
    int b;
    printf("Enter Y co-ordinate: ");
    scanf("%d", &b);
    return b;
}

int output(int d)
{
    printf("The distance between two points is: %d \n", d);
}

int main()
{
    int w,x,y,z,s;
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
