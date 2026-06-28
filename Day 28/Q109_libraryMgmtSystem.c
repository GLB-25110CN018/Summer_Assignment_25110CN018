#include <stdio.h>

int main() {
    int bookId;
    char bookName[30];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("\n--- Library Record ---\n");
    printf("Book ID   : %d\n", bookId);
    printf("Book Name : %s\n", bookName);

    return 0;
}