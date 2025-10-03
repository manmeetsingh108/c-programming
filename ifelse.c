#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("ENter CHaracter ");
    scanf("%c",&ch);
    if(isalpha(ch)){
        ch=toupper(ch);
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("%c is Vowel");
        }
        else{
            printf("It is not Vowel");
        }
    }
    else{
        printf("Invalid Input!!");
    }
    return 0;
}
