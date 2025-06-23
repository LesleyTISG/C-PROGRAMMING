#include <stdio.h>
#include <stdlib.h>

int TotalSales , Days;

int main(){
    printf("Enter Total Sales :");
    scanf("%d", &TotalSales);

    printf("Enter the Days :");
    scanf("%d", &Days);

    double AverageSales;
    AverageSales = (double)(TotalSales / Days);
    printf("Average Sales =\t%.2lf", AverageSales);
    return 0;

}