#include <stdio.h>

int main() {
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // store original value

    while (num != 0) {
        digit = num % 10;         // extract last digit
        rev = rev * 10 + digit;   // build reversed number
        num = num / 10;           // remove last digit
    }

    if (original == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}
