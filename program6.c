#include<stdio.h>
int main(){
    float x1,x2,y1,y2,distance;
    printf("Enter the x-coordinate of the first point x1:");
    scanf("%f",&x1);
    printf("Enter the x-coordinate of the second point x2:");
    scanf("%f",&x2);
    printf("Enter the y-coordinate of the first point y1:");
    scanf("%f",&y1);
    printf("Enter the y-coordinate of the second point y2:");
    scanf("%f",&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Euclidean distance is:%.3f",distance);
    return 0;
}