#include <stdio.h>
#include <stdlib.h>


    double FixedPercentage = 0.15 , Salary = 2500000;

int main() {

    double Bonus = Salary * FixedPercentage;

    printf("The bonus is: USD%.2f\n", Bonus);

    return 0;
}