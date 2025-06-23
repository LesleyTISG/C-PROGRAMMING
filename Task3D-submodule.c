#include <stdio.h>
#include <stdlib.h>

int HourlyWage , HoursPerWeek , WeeksPerYear;

int main(){
    printf("Enter the Hourly Wage : ");
    scanf("%d", &HourlyWage);

    printf("Enter the Hours Per Week : ");
    scanf("%d", &HoursPerWeek);

    printf("Enter the Weeks Per Year : ");
    scanf("%d", &WeeksPerYear);

    double AnnualSalary;
    AnnualSalary = (double)(HourlyWage * HoursPerWeek * WeeksPerYear);
    printf("The Annual Salary is %.2lf ", AnnualSalary);

    return 0;

}