#include <stdio.h>

int main(void)
{
int i;

for(i=50; i>=1; i--)
{
if (i %15 == 0)
printf("Fizz Buzz ");
else if (i %3 == 0)
printf("Fizz ");
else if (i %5 == 0)
printf("Buzz ");
else 
printf("%d\t", i);
}
return 0;
}

