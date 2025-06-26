#include <stdio.h>

int main() {
    int years;
    float fee, discount, finalFee;

    printf("Enter membership duration (years): ");
    scanf("%d", &years);

    printf("Enter total fee: ");
    scanf("%f", &fee);

    if (years >= 1 && years <= 3) {
        discount = 0.05 * fee;
    } else if (years >= 4) {
        discount = 0.10 * fee;
    } else {
        discount = 0;
    }

    finalFee = fee - discount;

    printf("Final amount to pay: %.2f\n", finalFee);

    return 0;
}