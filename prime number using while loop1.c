#include <stdio.h>
#include <math.h>

int main() {
    int N, i = 2, flag=0;
    scanf("%d", &N);
    if (N <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    while (i <= N/2) {
        if (N % i == 0) {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
