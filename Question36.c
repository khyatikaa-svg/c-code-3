#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // find minimum of num1 and num2
    int min = (num1 < num2) ? num1 : num2;

    // loop from 1 to min
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // update HCF
        }
    }

    printf("HCF (GCD) of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
