#include <stdio.h>

void getstring(char* string);
int getsize(char* string);
void reversestring(char* string, int size);


void getstring(char* string)
{
    printf("please enter a string: ");
    scanf("%[^\n]s", string);
}

int getsize(char *string)
{
    int size=0;
    for(int i=0; string[i] != '\0';i++)
    {
        size++;
    }
    return size;
}

void reversestring(char* string, int size)
{
    int n= size-1;
    char temp;

    for(int i=0;i<=(size/2);i++)
    {
        temp = string[i];
        string[i]=string[n];
        string[n]=temp;
        n--;
    }
    
}

int main(void)
{
    char string[500];
    int stringsize=0;

    getstring(string);
    printf("the string you entered is: %s\n",string);

    stringsize = getsize(string);
    printf("the size of the string is %d\n", stringsize);

    reversestring(string, stringsize);
    printf("the reversed string is: %s\n", string);

    stringsize = getsize(string);
    printf("the size of the string is %d\n", stringsize);
}