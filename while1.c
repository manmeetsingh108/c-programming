#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter Numbers ");
    scanf("%d",&num);
    if(num==0)
        printf("Number of digits are : 1");
    else{
         while (num != 0){
            num = num/10;
            count++;
        }  
        printf("Number of digits are %d",num);
    }
    return 0;
}
