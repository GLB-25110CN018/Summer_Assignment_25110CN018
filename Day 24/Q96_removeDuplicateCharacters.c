#include <stdio.h>

int main() {
    char str[100];
    int i, j, duplicate;

    printf("Enter a string: ");
    gets(str);

    printf("After Removing Duplicates: ");

    for(i = 0; str[i] != '\0'; i++) {
        duplicate = 0;

        for(j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        if(!duplicate)
            printf("%c", str[i]);
    }

    return 0;
}