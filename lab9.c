//ecary6 14381104 lab 9 4/7/23
#include <stdio.h>
#include <string.h>

int getswap();
void getstring(char*string);
void swapping(char*string, int swap);

int getswap()
{
    int swap=0;
    printf("please enter a swap distace between 1 and 5 inclusive: ");
    scanf("%d", &swap);
    while(swap<1 || swap>5)//must be or or it is always true
    {
        printf("please enter a swap distace between 1 and 5 inclusive: ");
        scanf("%d", &swap); 
    }
    return swap;
}

void getstring(char* string)
{
    //int i=0;
    printf("please enter a string between 20 to 40 characters: ");
    scanf("%s",string);
    while((strlen(string)<=20) || (strlen(string)>=40))//not sure why it wont prompt with over again? //looking for string length, use string library
    {
        printf("please enter a string between 20 to 40 characters: ");
        scanf("%s",string);
    }
}
void swapping(char* string, int swap)
{
    char temp;

    for(int i=0;i<sizeof(string);i+=(swap+1))
    {
        temp = *(string+i+swap);//tests to see if the values will work and if it is doing the comparisons right
        // printf("%c\n", temp);
        // printf("%c\n", string[i+swap]);
        *(string+i+swap)=string[i];//pointer arithmatic hurts
        // printf("%c\n", string[i+swap]);
        // printf("%c\n", string[i]);
        string[i]=temp;
        // printf("%c\n", string[i]);
        // printf("%c\n",temp);
    }
}

int main(void)
{
    char string[500];
    int swap=getswap();

    getstring(string);
    printf("the string you entered is: %s\n",string);

    swapping(string, swap);
    printf("the modified string is: %s\n", string);
}