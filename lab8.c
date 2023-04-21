//ecary6 14381104 March 17th Lab 8 cs 1050
#include <stdio.h>

//void GetCount(int *outputint);
void GetIntegerArray(int *outputintarray, int *count);
void PrintArray(int a[], int size);
int SumArray(int * array, int count);
int MaxArray(int * array, int count);
int MinArray(int * array, int count);

int main(void)
{
    printf("welcome to lab 8\n");//:(
    int a[500] = {0};//will allow up to 500 "blocks" but no more
    int count = 0; 

    //GetCount(&count);
    GetIntegerArray(a, &count);
    PrintArray(a, count);
    printf("Sum of the array is %d\n", SumArray(a, count));
    printf("Max array is %d\n", MaxArray(a, count));
    printf("Min array is %d\n", MinArray(a, count));
}

void GetIntegerArray(int *outputintarray, int *count)//will do the same as getcount of the integers
{
    printf("How many integers would you like to enter?:\n");//count will become the pointer instead of with the getcount funcition in the pre lab
    scanf("%d", count);

    for(int i = 1; i<=*count; i++)
    {
        printf("Enter integer #%d: ",i);
        scanf("%d", (outputintarray - 1 + i));
    }
}

void PrintArray(int a[], int size)//print array will print size
{
    printf("you entered an array with %d elements:\n", size);

    for(int i = 0; i<size; i++)
    {
        printf("a[%d] = %d\n", i, (a[i]));
    }    
}

int SumArray(int * array, int count)// dont know what is wrong
{
    int total=0;
    for(int i=0; i<=count; i++)
    {
        total+= array[i];
    }
    return total;
}
int MaxArray(int * array, int count)// could be done in one function, but both require an if statement and will loop through
{
    int max= array[0];
    for(int i=0; i<count;i++)
    {
        if(array[i]>max)
        {
            max =array[i];
        }
    }
    return max;
}
int MinArray(int * array, int count)// something is worng here
{
    int min= array[0];
    for(int i=0; i<count;i++)
    {
        if(array[i]<min)
        {
            min =array[i];
        }
    }
    return min;
}

