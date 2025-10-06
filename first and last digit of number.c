#include <stdio.h>
int main() {
    int num,first,last;
    scanf("%d",&num);
    if(num>=0 && num<=9)
        first = last = num;
    else{
        last = num%10;
        num = num/10;
        while(num !=0){
            first = num%10;
            num = num/10;
        }       
    }
    printf("%d %d", first ,last);
    return 0;
}
