//WAP to print a series i.e 1 4 9 16 25 .... N
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of N");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("%d",i*i);
    }
    return 0;
}
