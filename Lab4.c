/*ecary6 14381104 Lab4 2/10/23*/
#include<stdio.h>
int main(void)
{

    for(int i =11; i<=99; i++){ /*not workin, tried breaking it up, not workin more :-/*/
        int first = i/10;
        int second = i-first*10;
/*ternery is return, so USE printf*/
        printf("%s", first ==1 ? "teen " : 
                    first ==2 ? "twenty ":
                    first ==3? "thirty ": 
                    first ==4? "fourty " :
                    first ==5? "fifty " :
                    first ==6? "sixty " :
                    first ==7? "seventy " :
                    first ==8? "eighty " :
                    "ninety ");
/*%s is what it told me to put in when i got an error*/
        printf("%s", second ==0 ? "" :
                    second ==1? "one, " :
                    second ==2? "two, " :
                    second ==3? "three, " :
                    second ==4? "four, " :
                    second ==5? "five, " :
                    second ==6? "six, " :
                    second ==7? "seven, " :
                    second ==8? "eight, " :
                    "nine ,");
}
return 0;
}