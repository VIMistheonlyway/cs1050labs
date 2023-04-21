/* cs 1050
 * Sp 2023
 * Lab 2
 * By Ethan Anderson
 * ecary6, 14381104
 * 1/27/23*/
//please have mercy on my code
#include <stdio.h>

int main (void)
{

int X;
int Y;

printf("Enter X and Y\n");
scanf("%d %d", &X, &Y);//For each variable add a %d
printf("X = %d Y = %d\n", X, Y);

printf("X times Y = %d\n", (X*Y));
printf("X divided by Y = %d\n", (X/Y));
printf("X + 1 times Y = %d\n", ((X+1)*Y));
printf("X= %d, Y= %d\n", X, Y); //remember commas!!!

return 0;
}
