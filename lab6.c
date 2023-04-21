#include <stdio.h>
int main(void)
{
    int n[50];//={0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    //why type all the initialized values, was told this was ok to do
    int i;
    int totaleven=0;
    int averageeven;
    int totalodd=0;
    int averageodd;

for(i = 0; i<50; i++)
{
    n[i] = i*2;
}

    for(i=0; i<50; i++)
    {
        printf("array[%d] %d\n", i, n[i]);
        if(i%2==0)
        {
            totaleven+=n[i];
            averageeven=(totaleven/25);//should print the right values, but does not, wraps around instead for odd
        }
        else if(i%2==1)
        {
            totalodd+=n[i];
            averageodd=(totalodd/25); //math is to divide the total of even or odd by 25
        }
    }
    printf("total of even indexed = %d\n", totaleven);
    printf("average of even indexed = %d\n", averageeven);      
    printf("total of odd indexed = %d\n", totalodd);
    printf("average of odd indexed = %d\n", averageodd);

return 0; //daphne said it was cool to be a little over on time
}
