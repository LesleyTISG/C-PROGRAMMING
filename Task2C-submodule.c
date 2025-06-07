#include <stdio.h>
#include <stdlib.h>

double ExchangeRate = 3500;
double ExchangeAmount = 700;
double ConvertedAmount;

int main() {

ConvertedAmount = ExchangeAmount * ExchangeRate;
printf("USD700 is : UGX%.2f\n", ConvertedAmount);

    return 0;
}