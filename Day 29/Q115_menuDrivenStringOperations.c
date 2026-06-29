#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("1. Length\n2. Uppercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            for(int i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase = %s", str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}