/*ecary6 cs1050 lab3 2/3/23*/

#include <stdio.h>

int main(void)
{
	int i=101;

	while(i>0)/*not working, hopefully this will*/
	{
		if(i %2 ==0){
			i--; /*figured it out, remember this!!!*/
			continue; /*will cycle through the rest*/
		}
		if(i %3 ==0){
			printf("t");
		}
		if(i %7 ==0){
			printf("s");
		}
		printf("%d\t", i--);

	}
	return 0;
}

