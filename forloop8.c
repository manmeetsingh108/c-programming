//WAP to print the multiplication of all the numbers from 1 to N
#include<stdio.h>
int main(){
    int i,n,mult=1;
    printf("Enter the value of N");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        mult*= i;
    }
    printf("Multiplication = %d",mult);
    return 0;
}
