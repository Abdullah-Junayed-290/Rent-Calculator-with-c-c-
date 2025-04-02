#include <iostream>

using namespace std;

int main()
{
    int rent, food_ordered, electricity_bill, charge_per_unit, livign_persons;

    cout << "Enter the amount of flat/hostel rent = ";
    cin >> rent;

    cout << "Enter the amount of food ordered = ";
    cin >> food_ordered;

    cout << "Enter the electricity_bill = ";
    cin >> electricity_bill;

    cout << "Enter the charge per unit = ";
    cin >> charge_per_unit;

    cout << "Enter total room person ar living = ";
    cin >> livign_persons;

    int total_electricity_bill, total_pay;

    total_electricity_bill = electricity_bill * charge_per_unit;

    total_pay = (rent + food_ordered + total_electricity_bill) / livign_persons;

    cout << "Each person will pay " << total_pay;
    return 0;
}