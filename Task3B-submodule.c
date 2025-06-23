#include <stdio.h>
#include <stdlib.h>

float CommissionRate;
int SalesVolume;

int main(){
    printf("Enter Sales Volume :");
    scanf("%d", &SalesVolume);

    printf("Enter the Commission Rate :");
    scanf("%f", &CommissionRate);

    double Commission;
    Commission = (double)(SalesVolume * CommissionRate);
    printf("The Sales Person recieved a commission of UGX%.2lf", Commission);
    return 0;

}
