//ecary6, 2/24/23, lab 5
#include <math.h>
#include <stdio.h>
int ISPrime(int n); //had to remember to prototype
int main(void)
{
    int n;
    for(n=1;n<=100;n++)
    {
        if(ISPrime(n))
        {
            printf("%d ",n);
        }
    }
}
int ISPrime(int n)
{    
    int j;
    for(j=2;j<n;j++)    //all numbers are are divisible by one so that will cause an error, so use 2 as starting value
    {
        if(n%j==0)
        {
            return 0;   //always false
        }
    }
    return 1;
}
//formatting hurts :[