//WAP to find the sum of n fractions.
#include<stdio.h>

typedef struct fractions{
int numerator,denominator;
}
Fractions;

int get_numerator(){
int x;
printf("Enter the total no of fractions: \n");
scanf("%d",&x);
return x;
};

void get_inputs(Fractions *c, int n)
{
for(int i = 0;i<n;i++)
{
printf("Enter the numerator:\n");
scanf("%d",&c[i].numerator);
printf("Enter the denominator:\n");
scanf("%d",&c[i].denominator);
}
};
void show_output(Fractions x,Fractions *c,int n)
{
printf("sum of the fractions ");
for(int i=0;i<n;i++)
{
    if(i==n-1)
    {
        printf(" %d/%d = %d/%d",c[i].numerator,c[i].denominator,x.numerator,x.denominator);
    }
    else
    {
    printf("%d/%d +",c[i].numerator,c[i].denominator);
    }
}
};

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    
    return gcd(b%a,a);
};

Fractions calculate(Fractions final,int n, Fractions *c)
{
int a,b=0,test=1;
for(int i =0;i<n;i++)
{
test = test*c[i].denominator;
}
final.denominator =test;

for(int i =0;i<n;i++)
{
a=c[i].numerator;
for(int j=0;j<n;j++)
{
if(i!=j)
{
a=a*c[j].denominator;
}
}
b=b+a;
}


final.numerator=b/ gcd(b,test);
final.denominator=test/ gcd(b,test);
return final; 
};

int main()
{
int n,a,b=0,test=1,gcd;
Fractions final;
n = get_numerator();
Fractions  c[n];
get_inputs(a,n);
final = calculate(final,n,a);

show_output(final,a,n);
return 0;
}
