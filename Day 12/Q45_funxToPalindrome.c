#include <stdio.h>

int palindrome(int n) {
    int original, reverse = 0, rem;

    original = n;

    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}