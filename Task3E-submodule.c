#include <stdio.h>
#include <stdlib.h>

int Customer1 , Customer2 , Customer3;

int main(){
    printf("Customer 1 : ");
    scanf("%d", &Customer1);

    printf("Customer 2 : ");
    scanf("%d", &Customer2);

    printf("Customer 3 : ");
    scanf("%d", &Customer3);

    double TotalRevenue;
    TotalRevenue = (double)(Customer1 + Customer2 + Customer3);
    printf("The Total Revenue is %.2lf ", TotalRevenue);

    return 0;

}