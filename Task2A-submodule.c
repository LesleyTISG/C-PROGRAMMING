#include <stdio.h>
#include <stdlib.h>

int Principle = 1000000;
double Time = 4;
double Rate = 0.05;

int main() {

double SimpleInterest = Principle * Rate * Time;
printf("Simple Interest is: USD%.2f\n", SimpleInterest);

    return 0;
}
