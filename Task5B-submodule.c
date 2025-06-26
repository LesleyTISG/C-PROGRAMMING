#include <stdio.h>

int main() {
    float salary, finalSalary;
    int years;

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &years);

    if (years > 5) {
        finalSalary = salary + (0.05 * salary);
    } else {
        finalSalary = salary;
    }

    printf("Final salary: %.2f\n", finalSalary);

    return 0;
}