#include <stdio.h>
int main() {
    int n, rem, reversed=0;
    scanf("%d",&n);
    if(n>=0 && n<=9)
        printf("%d",n);
    else{
        while(n!=0){
            rem=n%10;
            reversed=reversed*10 + rem;
            n=n/10;
        }
        printf("%d\n",reversed);
    }
    return 0;
}
