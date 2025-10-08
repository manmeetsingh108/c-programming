#include <stdio.h>
#include <math.h>

int main() {
    int N, i = 2, isPrime = 1;
    scanf("%d", &N);
    if (N <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    while (i <= sqrt(N)) {
        if (N % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
