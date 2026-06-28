#include <stdio.h>

int main() {
    char name[30];
    int accNo;
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\n--- Account Details ---\n");
    printf("Account No : %d\n", accNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}