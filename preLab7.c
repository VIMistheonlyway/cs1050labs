#include <stdio.h>
#define COLS 3
    void Print2Darray(int array[][COLS], int rows);
    int Printrowaverage(int array[][COLS], int row);
    int Printcolaverage(int array[][COLS], int col);

    int main(void)
    {
    int array[12][3]={{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, {97, 99, 85}, {85, 95, 91}, {96, 91, 99}, {94, 90, 85}, {98, 98, 90}, {76, 82, 98}};
    int row = 12; //col =3;

    //printf("row[%d] is %d %d %d",array);
    //printf("%d\n ", Printrowaverage(array, row));
    //printf("%d\n ", Printcolaverage(array, col));
    Print2Darray(array, row);
    //return 0;
    }

    void Print2Darray(int array[][COLS], int rows)
    {
        int r;
        int c;

        for(r=0;r<12;r++)
        {
            for(c=0;c<3;c++)
            {
                printf("%d ",array[r][c]);
            }
        printf("\n");
        }
    }

    int Printrowaverage(int array[][COLS], int row)
    {
        int i;
        int j;
        int count =0;

        for(i=0; i<row;i++)
        {
            count=0;
            for(j=0; j<3; j++)
            {
                count+=array[i][j];
            }
        }
        return count/3;
    }

 int Printcolaverage(int array[][COLS], int whichcol)
 {
    int n;
    int total =0;

    for(n=0; n<whichcol;n++)
        {
            total += array[n][COLS];
        }
    return total/12;
 }