#include <stdio.h>

int main() {
    float amount, received;

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount < 500) {
        received = amount - 10; // Fee of 10
    } else {
        received = amount;
    }

    printf("Net amount received: %.2f\n", received);

    return 0;
}
