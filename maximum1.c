#include<stdio.h>
#include<limits.h>
int main(){
    int n,num,i,max=INT_MIN;
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
