#include <stdio.h>
int main() {
    int n, num, reversed=0;
    scanf("%d",&n);
    while(n!=0){
        num=n%10;
        reversed=reversed*10 + num;       
        n=n/10;
    }
    printf("%d\n",reversed);
    return 0;
}
