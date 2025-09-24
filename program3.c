#include<stdio.h>
int main(){
    int x,y,sub,sum,mult,rem,div;
    printf("Enter first value");
    scanf("%i",&x);
    printf("Enter second value");
    scanf("%i",&y);
    sub=x-y;
    sum=x+y;
    mult=x*y;
    rem=x%y;
    div=x/y;
    printf("Subtraction=%i \nAddition=%i \nMultiplication=%i \nReminder=%i \nDivision=%i",sub,sum,mult,rem,div);
    return 0;
}