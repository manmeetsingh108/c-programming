#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits = 0, temp, swapped;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    last = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    if (digits == 0) {
        swapped = n;
    } else {
        int middle = n % (int)pow(10, digits);
        middle /= 10;
        swapped = last * (int)pow(10, digits) + middle * 10 + first;
    }
    printf("Number after swapping first and last digits: %d\n", swapped);
    return 0;
}
