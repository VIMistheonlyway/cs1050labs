#include <stdio.h>

//void GetCount(int *outputint);
void GetIntegerArray(int *outputintarray, int count);
void PrintArray(int a[], int size);
void GetCount(int *outputint);

int main(void)
{
    int a[500] = {0};//will allow up to 500 "blocks" but no more
    int count = 0; 

    GetCount(&count);
    GetIntegerArray(a, count);
    PrintArray(a, count);
}

void GetIntegerArray(int *outputintarray, int count)//will do the same as getcount of the integers
{
    for(int i = 1; i<=count; i++)
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

void GetCount(int *outputint)
{
    printf("How many integers would you like to enter?:\n");
    scanf("%d", outputint); 
}
