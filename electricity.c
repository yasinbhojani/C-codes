//An electricity board charges according to the following rates: for the first 100 units- 40 paisa per unit. For the next 200 units - 50 paisa per unit. beyond 300 units- 60 paisa per unit. all users are charged meter charges also, which are 50 rs
#include<stdio.h>
int main()
{
    float unit;
    float bill_A=0, bill_B=0, bill_C=0, totalbill;
    printf("Enter your unit count of electricity : ");
    scanf("%f", &unit);

    if(unit<=100)//this if sees whether unit count is below 100 if yes, then calculates the bill and sends the control directly to total
    {
        bill_A=unit*0.40;
        goto total;
    }
    else//if unit is not below 100 then calculates the bill for only 100 units and then substracts the 100 units from total units
    {
        bill_A=100*0.40;
        unit = unit - 100;
    }

    if(unit<=200)//here sees whether previously substracted unit is less then 200 if yes, then calculates the bill and sends the control to total
    {
        bill_B=unit*0.50;
        goto total;
    }
    else//if substracted unit is not below 200 then calculates the bill for 200 units and then substracts the 200 units from previously substracted units.
    {
        bill_B=200*0.50;
        unit = unit -200;
    }

    bill_C=unit*0.60;//anything above 300 units will be calculated here from the units that are left after all the subtracting
    
    total:
    totalbill = bill_A+bill_B+bill_C+50;//calculate the total bill here +50 rs for meter charges
    printf("\nyour total bill is : %.2f", totalbill);

    return 0;
}