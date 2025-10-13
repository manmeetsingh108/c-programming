//program to read and display the elements of an array//
#include<stdio.h>
int main(){
    int size;
    printf("Array Size :");
    scanf("%d",&size);
    int stu[size];
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
