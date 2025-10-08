#include <stdio.h>
int main() {
    int n,rev=0;
    scanf("%d",&n);
    if(n>=0 && n<=9)
        printf("Palindrome");
    else{
        int n1 = n;
        while(n!=0){
            int rem=n%10;
            rev=rev*10 + rem;
            n=n/10;
        }
        if(n1==rev)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    return 0;
}
