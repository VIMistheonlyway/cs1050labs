/* ecary6
 * 14381104
 * 2/3/2023
 * Lab 3*/

#include<stdio.h>

int main()
{
int i;
while( i=100; i>=1; i--)
{ /*beware infinite 99 if not ran right*/
if(i %21 == 0) /*lets try this for a change instead of a while which caused infinite 99*/
printf("ts ");
else if (i %7 ==0)
printf("s ");
else if (i %3 ==0)
printf("t ");
}
return 0;

}/*not sure if i needed to use a while statement or not, but i did it without one*/
