#include <stdio.h>

int main() {
    float amount, tax, total;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount < 500) {
        tax = 0.05 * amount;
    } else {
        tax = 0.08 * amount;
    }

    total = amount + tax;

    printf("Tax: %.2f\n", tax);
    printf("Total payable amount: %.2f\n", total);

    return 0;
}