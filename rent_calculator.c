#include <stdio.h>

int main()
{
    int rent, food_ordered, electricity_bill, charge_per_unit, livign_persons;

    printf("Enter the amount of flat/hostel rent = ");
    scanf("%d", &rent);

    printf("Enter the amount of food ordered = ");
    scanf("%d", &food_ordered);

    printf("Enter the electricity bill = ");
    scanf("%d", &electricity_bill);

    printf("Enter the charge per unit = ");
    scanf("%d", &charge_per_unit);

    printf("Enter total room person ar living = ");
    scanf("%d", &livign_persons);

    int total_electricity_bill, total_pay;

    total_electricity_bill = electricity_bill * charge_per_unit;

    total_pay = (rent + food_ordered + total_electricity_bill) / livign_persons;

    printf("Each person pay = %d", total_pay);

    return 0;
}