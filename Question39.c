#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;  // to handle bigger numbers
    int hasOdd = 0;         // flag to check if there is any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num; // handle negative numbers

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num = num / 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits in the number.\n");

    return 0;
}
