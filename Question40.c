#include <stdio.h>

int main() {
    long long binary, temp, rev = 0, onesComplement = 0, digit;
    long long place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    // Step 1: Reverse the number to maintain correct order
    while (temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    temp = rev;

    // Step 2: Compute 1's complement
    while (temp != 0) {
        digit = temp % 10;
        if (digit == 0)
            digit = 1;
        else if (digit == 1)
            digit = 0;
        else {
            printf("Invalid binary number!\n");
            return 0;
        }

        onesComplement = onesComplement * 10 + digit;
        temp /= 10;
    }

    printf("1's complement = %lld\n", onesComplement);

    return 0;
}
