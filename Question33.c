#include <stdio.h>

int main() {
    int num, original, temp, digits = 0, digit, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count digits
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;

    // Calculate sum of digits^digits
    while (temp != 0) {
        digit = temp % 10;

        // compute digit^digits using loop
        int power = 1;
        for (i = 1; i <= digits; i++) {
            power *= digit;
        }

        sum += power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
