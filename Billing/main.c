#include<stdio.h>

void main(void)
{
float  bill, units, z, id;
char name;

printf("\n Enter the name, id, and units consumed:");
scanf("%s %f %f", name, id, &units);

if (units < 150)
{
bill = 1.2*units;
}
else if (units >= 150 && units < 350)
{
bill = 3.2*units / 2;
}
else if (units >= 350 && units < 575)
{
bill = 6 * units / 3;
}
else
{
bill = 12.5*units / 5;
}

if (bill > 400)
{
z = bill*.02 + bill;
printf("Customer name: %f", z);
}
else
{
printf("bill is %f", bill);
}






}
