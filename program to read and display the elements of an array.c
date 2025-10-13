//program to read and display the elements of an array//
#include<stdio.h>
int main(){
    int stu[5]={1,2,3,4,5};
    //how we can read elements of an array from user//
    printf("Enter roll number of 5 stufents :");
    for(int i=0; i<5; i++){
        scanf("%d",&stu[0]);
    }
    //how we can display all elements of an array//
    for(int i=0; i<5; i++){
        printf("%d\t",stu[i]);
    }
    return 0;
}
