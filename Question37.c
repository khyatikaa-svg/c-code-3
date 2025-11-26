#include <stdio.h>

int main() {
    int num1, num2, lcm, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // start from the maximum of num1 and num2
    max = (num1 > num2) ? num1 : num2;
    lcm = max;

    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;  // found LCM
        }
        lcm++;  // check next number
    }

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
