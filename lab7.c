//ecary6 10 March 2023 14381104 Lab 7

#include <stdio.h>
#define col 3//symbolic constant, NOT global variable

void Printgrade(int grade[][col], int row);//three columns constant through lab
void HATG(int grade[][col], int graderow, int gradecol, int curvecol, int curverow, int curve[][col]); //Here Are The Grades
char Letter(int letter, int curvecol, int curverow, int curve[][col]); //char to print letter grade
// void Printcurve(int curve[][COLS], int row);

int main(void)
{
    int grade[12][3]={{72, 68, 62}, {95, 88, 95}, {93, 97, 86}, {98, 77, 98}, {99, 92, 90}, {47, 32, 27}, {97, 99, 75}, {85, 95, 91}, {96, 91, 99}, {94, 90, 74}, {98, 98, 90}, {76, 82, 98}};
    int curve[4][3]={{85, 90, 90}, {75, 80, 75}, {60, 70, 55}, {50, 60, 40}};
    int graderow = 12, curverow=4, gradecol=3, curvecol=3;
    puts("Grade values");//like printf, but makes new line
    Printgrade(grade, graderow);
    puts("curve values");
    Printgrade(curve, curverow);
    puts("Letter values");
    HATG(grade, graderow, gradecol, curvecol, curverow, curve);
    
}
void Printgrade(int grade[][col], int row)
{
    for(int r=0;r<row;r++)
    {
        printf("Row %d; ", r);
        for(int c=0;c<3;c++)
            {
                printf("%d ",grade[r][c]);
            }
    printf("\n");
    }
}
void HATG(int grade[][col], int graderow, int gradecol, int curvecol, int curverow, int curve[][col])
{
    for(int r=0;r<graderow;r++)
    {
        printf("student %d; ", r);
        for(int c=0;c<gradecol;c++)
            {
                printf("%c ",Letter(grade[r][c], c, curverow, curve));
            }
        printf("\n");
    }
}
char Letter(int letter, int class, int curverow, int curve[][col])
{
    for(int i=0; i<curverow;i++)
    {
        int cutoff = curve[i][class];
        if(letter>cutoff)
        {
            switch(i)
            {
                case 0:
                    return 'A';
                case 1:
                    return 'B';
                case 2:
                    return 'C';
                case 3:
                    return 'D';
            }
        }
    }
    return 'F';//default case if all are not satisfied
}