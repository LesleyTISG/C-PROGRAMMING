#include <stdio.h>

int main() {
    int units;
    float total;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 200) {
        total = units * 0.50;
    } else {
        total = units * 0.75;
    }

    printf("Total bill: %.2f\n", total);

    return 0;
}