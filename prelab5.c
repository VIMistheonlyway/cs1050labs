#include <math.h>
#include <stdio.h>
long factorial(int n);
long double myexp(int j);
int main()
{
    // myexp(1);
    int i;
    for (i=1;i<=5;i++)
    {
        printf("e to the power of %d = %.10Lf\n",i,myexp(i));
    }
    return i;
}
long factorial(int n)
{
    long result=1;
    for (int i=n;i>1;i--)
    {
        result*=i;
    }
    return result;
}
long double myexp(int j)
{
    long double e_natlog=0;
    for (long double i =0; i<10; i++)
    {
        // printf("i=%Lf, e=%Lf, i! = %ld, 1/i! = %.10Lf\n",i, e_natlog, factorial(i), i/factorial(i));
        e_natlog+=i/(long double)factorial(i);
    }
    // printf("%.10Lf", e_natlog);
    return pow(e_natlog, j);
}

