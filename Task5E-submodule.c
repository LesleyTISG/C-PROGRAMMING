#include <stdio.h>

int main() {
    float hours, rate, salary;

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    if (hours > 40) {
        salary = 40 * rate + (hours - 40) * 1.5 * rate;
    } else {
        salary = hours * rate;
    }

    printf("Total salary: %.2f\n", salary);

    return 0;
}