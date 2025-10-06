#include <stdio.h>
int main() {
    int num,first,last,count=0,temp;
    scanf("%d",&num);
    last=num%10;
    num=num/10;
    temp=num;
    while(temp!=0){
        temp = temp/10;
        count++;
    }
    first = num/(int)pow(10,count-1);
    num = num%(int)pow(10,count-1);
    num = last*pow(10,count) + num*10 + first;
    printf("%d", num);
    return 0;
}
