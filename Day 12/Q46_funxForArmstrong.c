#include <stdio.h>

int armstrong(int n) {
    int original, sum = 0, rem;

    original = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (original == sum)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}