#include <stdio.h>

int main() {
    int id, quantity;
    char item[30];
    float price;

    printf("Enter Item ID: ");
    scanf("%d", &id);

    printf("Enter Item Name: ");
    scanf("%s", item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\n--- Inventory Details ---\n");
    printf("Item ID   : %d\n", id);
    printf("Item Name : %s\n", item);
    printf("Quantity  : %d\n", quantity);
    printf("Price     : %.2f\n", price);

    return 0;
}