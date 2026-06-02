#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int reverse = 0;
    int original = n; 
    while(n != 0)
    {   
        reverse = reverse * 10 + n % 10;
        n = n / 10; 
    }
    if (original == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}