#include<stdio.h>
int main(){
    float radius,sides,length,width,area,perimeter;
    printf("Enter value of radius:");
    scanf("%f",&radius);
    area=3.141*radius*radius;
    perimeter=2*3.141*radius;
    printf("Area of circle=%f \nPerimeter of circle=%f\n",area,perimeter);
    printf("Enter sides of square:");
    scanf("%f",&sides);
    area=sides*sides;
    perimeter=4*sides;
    printf("Area of square=%f \nPerimeter of square=%f\n",area,perimeter);
    printf("Enter length of rectangle:");
    scanf("%f",&length);
    printf("Enter width of rectangle:");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("Area of rectangle=%f \nPerimeter of rectangle=%f",area,perimeter); 
    return 0;
}