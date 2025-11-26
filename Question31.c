#include <stdio.h>

int main() {
    int num, binary = 0, base = 1, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 2;          // remainder (0 or 1)
        binary = binary + rem * base;  // build binary number
        base = base * 10;       // shift place value (1,10,100...)
        num = num / 2;          // divide by 2
    }

    printf("Binary representation = %d\n", binary);

    return 0;
}
