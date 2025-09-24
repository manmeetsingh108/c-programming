#include<stdio.h>
int main(){
    float r,area,perimeter;
    printf("Enter value of radius");
    scanf("%f",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("Area of circle=%f \nPerimeter of circle=%f",area,perimeter); 
    return 0;
}