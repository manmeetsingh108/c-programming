#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum=0, count=0;
    scanf("%d",&n);
    int temp=n;
    while(temp !=0){
        temp/=10;
        count++;
    }
    temp=n;
    while(temp!=0){
        int lastdigit=temp%10;
        sum =sum + pow(lastdigit,count);
        temp/=10;
    }
    if(n==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
