#include <stdio.h>

int main() {
    float pricePerUnit, totalCost, discount = 0.0;
    int quantity;

    printf("Enter price per unit: ");
    scanf("%f", &pricePerUnit);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    totalCost = pricePerUnit * quantity;

    if (quantity >= 10) {
        discount = 0.15 * totalCost;
    }

    totalCost -= discount;

    printf("Discount applied: %.2f\n", discount);
    printf("Total cost after discount: %.2f\n", totalCost);

    return 0;
}
