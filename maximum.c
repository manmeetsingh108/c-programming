#include<stdio.h>
int main(){
    int n,num,i,max=0;
    printf("Enter the value of N");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("Enter Number ");
        scanf("%d",&num);
        if(num>max)
            max=num;
    }
    printf("Maximum number is %d",max);
    return 0;
}