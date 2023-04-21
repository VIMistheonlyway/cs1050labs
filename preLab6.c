#include <stdio.h>

int main(void)
{
    int n[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int i;
    int total=0;


    for(i=0; i<20; i++){
        printf("array[%d] %d\n", i, n[i]);

    }
    for(i=0; i<20; i++){
        total+=n[i];
    }
    printf("Total = %d\n", total);
    printf("Average = %d\n", total/20);

    return 0;
}