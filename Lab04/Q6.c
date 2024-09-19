#include <stdio.h>
int main() {
    int c_id, unit_consumed, total_charge, surcharge, netamount;
    float charge_per_unit;
    char c_name[20];

    printf("Enter customerID, CustomerName and Units Consumed: ");
    scanf("%d %s %d", &c_id, c_name, &unit_consumed);

    if (unit_consumed <= 199) {
        charge_per_unit = 16.20;
    } else if (unit_consumed <= 299) {
        charge_per_unit = 20.10;
    } else if (unit_consumed <= 499) {
        charge_per_unit = 27.10;
    } else {
        charge_per_unit = 35.90;
    }

    total_charge = charge_per_unit * unit_consumed;
    surcharge = total_charge * 0.15;
    netamount = total_charge + surcharge;

    printf("CustomerID: %d\nCustomer Name: %s\nUnits Consumed: %d\nAmount Charges@ %f per unit: %d\nSurcharge Amount: %d\nNet Amount Paid by the Customer: %d\n",
           c_id, c_name, unit_consumed, charge_per_unit, total_charge, surcharge, netamount);

    return 0;
}
