#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, max = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0')
            len++;
        else {
            if(len > max)
                max = len;
            len = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word Length = %d", max);

    return 0;
}