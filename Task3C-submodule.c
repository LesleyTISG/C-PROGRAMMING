#include <stdio.h>
#include <stdlib.h>

int AssetCost , ResidualValue , UsefulLife;

int main(){
    printf("Enter the Asset Cost : ");
    scanf("%d", &AssetCost);

    printf("Enter the Residual Life : ");
    scanf("%d", &ResidualValue);

    printf("Enter the Useful Life : ");
    scanf("%d", &UsefulLife);

    double Depreciation;
    Depreciation = (double)(AssetCost - ResidualValue)/UsefulLife;
    printf("The Depreciation is %.2lf ", Depreciation);

    return 0;

}