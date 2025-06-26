#include <stdio.h>

int main() {
    float amount, finalAmount;

    printf("Enter the total purchase amount: ");
    scanf("%f", &amount);

    if (amount > 1000) {
        finalAmount = amount - (0.1 * amount);
    } else {
        finalAmount = amount;
    }
    printf("Final amount to pay: %.2f\n", finalAmount);

    return 0;
}