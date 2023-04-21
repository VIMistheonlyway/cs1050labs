#include <stdio.h>
int value(int j);
int main(void)
{
    int n[49];
    int i;
    int j;

    for(j=0; j<=98; j++)
    {
    if(value(j))
        {
            return 1;
        }
    }
    for(i=0;i<50;i++)
    {
        printf("array1[%d] = %d",i, n[value(j)]);
    }
    return 0;
int value(int i)
{    
    int j;
    for(j=0;j<=98;j+=2)
    {
    }
    return j;
}
