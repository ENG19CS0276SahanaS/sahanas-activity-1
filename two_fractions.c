//WAP to find the sum of two fractions.
#include <stdio.h>
struct frac
{
    float nm, dm;
} 
a1, a2;

int inputnm()
{
    float a;
    printf("Enter Numerator: ");
    scanf("%f",&a);
    return a;
}

int inputdm()
{
    float b;
    printf("Enter Denominator: ");
    scanf("%f",&b);
    return b;
}
int sum(int w, int x,int y, int z)
{
    int sum ,p, q, a, i;
    p=(w*z)+(x*y);
    q=x*z;
    for(i=1; i <= p && i <= q; ++i)
    {
        if(p%i==0 && q%i==0)
        a = i;
    }
        printf("Sum of two fractions is:  %d/%d ",p/a,q/a);
    return a;
}
int main()
{
    int s;
    printf("1st fraction:\n");
    a1.nm = inputnm();
    a1.dm = inputdm();
    printf("2nd fraction:\n");
    a2.nm = inputnm();
    a2.dm = inputdm();
    s= sum(a1.nm, a1.dm, a2.nm, a2.dm);
    return 0;
}
