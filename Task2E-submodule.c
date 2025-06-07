#include <stdio.h>
#include <stdlib.h>

    double ProductPrice = 100000 , TaxRate = 0.18;
    
int main() {
    double TotalCost = ProductPrice + (ProductPrice * TaxRate);
    printf("Total cost of the product : UGX%.2f\n", TotalCost);

    return 0;
}