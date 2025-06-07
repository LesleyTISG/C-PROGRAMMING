#include <stdio.h>
#include <stdlib.h>

double FixedPercentage = 0.15;
double Price = 100000;
double DiscountedPrice;

int main() {

DiscountedPrice = Price * FixedPercentage;
printf("The discounted price is: USD%.2f\n", DiscountedPrice);
  return 0;
}