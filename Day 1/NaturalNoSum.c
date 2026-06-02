#include <stdio.h>

int main(void)
{
    int n;
    long sum = 0;

    if (scanf("%d", &n) != 1) {
        printf("Please enter a positive integer\n");
        return 0;
    }

    if (n <= 0) {
        printf("Please enter a positive integer\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %ld \n", n, sum);
    return 0;
}
