#include <stdio.h>

int main() {
    char name[30];
    int tickets;
    float amount;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    amount = tickets * 200;

    printf("\n--- Ticket Details ---\n");
    printf("Name    : %s\n", name);
    printf("Tickets : %d\n", tickets);
    printf("Amount  : %.2f\n", amount);

    return 0;
}