#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char a;
    int b;
    float c;
    double d;
    scanf("%c %d %f %lf", &a, &b, &c, &d);
    printf("%c %d %.2f %.6lf",a,b,c,d);
    return 0;
}
